%!

% Sat Jul 18, 2009 18:34:01
% These are some utilities to handle line breaking from emacs.

 /Times-Roman findfont 12 scalefont setfont
% 	% define an initial y-position
 /yline 800 def
 /xline 100 def
 /y-spacing {1 currentfont /FontMatrix get 0  get 1000 mul cvi add} def

 /newline { xline yline moveto show
	   /yline yline y-spacing sub def} bind def


/addbreaks	{
	{ % start loop 
	  % get search-term from string on stack
	  (\n) search	% search for line break
	  {				% if found,
		%pop			% pop (true) off stack
					% (true) isn't on stack with "ifelse"
		/pre-break exch def	% store text up to \n as pre-break
		pre-break newline	% show the text, add newline.
		pop			% pop (\n) off stack
		% store rest of text as search-term
		%			this should be done automatically?
		}			% end (if found)
	{		% if no more breaks are found,
	newline
	exit}			% if no breaks found, exit loop
	ifelse
	} loop				% end loop
		} def


% Mon Jan 14, 2013 11:20:17
% Rewrote the above to use paths
% so as to get bounding boxes
/newlinep { xline yline moveto true charpath %show
	   /yline yline y-spacing sub def} bind def


% Mon Jan 28, 2013 12:28:31
% Just increment yline, forget about characters
/newlinen { % need a integer to loop over
	    /i exch def
	    yline y-spacing i mul sub
	   /yline exch def
	   } bind def
	   


	   
/addbreaksp { newpath
	{
	  (\n) search	% search for line break
	  {				% if found,
		/pre-break exch def	% store text up to \n as pre-break
		pre-break newlinep	% show the text, add newline.
		pop			% pop (\n) off stack
		}			% end (if found)
	{		% if no more breaks are found,
	newline
	exit}			% if no breaks found, exit loop
	ifelse
	} loop				% end loop
closepath
[ pathbbox ]
} def


/set-margins{/yline exch def /xline exch def } def

/textboxs {addbreaksp stroke aload pop box stroke} def
/textboxf {addbreaksp fill aload pop box stroke} def
