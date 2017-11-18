/dot-size 5 def
/dot {currentpoint newpath dot-size 0 360 arc stroke}  def
/dotf {currentpoint newpath dot-size 0 360 arc fill}  def
/packpoints  
        {
        /points 8 array def
        0 1 7 {                          % loop over 0,1,..7
                /i exch def              % store iteration int.  0,1,..7
                count /num exch def      % store stack size as /num
                num dup 1 sub roll       % roll bottom element of stack to top
                /val exch def            % store bottom element as /val
                points i val put         % put value in ith value of points array
                } for
        } def 
/drawdots
        { 
        points 0 get points 1 get moveto dot
        points 2 get points 3 get moveto dot
        points 4 get points 5 get moveto dot
        points 6 get points 7 get moveto dot
        } def
/drawcontrols
        { 
        points 0 get points 1 get moveto 
        points 2 get points 3 get lineto stroke
        points 4 get points 5 get moveto
        points 6 get points 7 get lineto stroke
        } def
/drawcurve
        {
        points 0 get points 1 get moveto
        2 1 7 {/i exch def points i get} for
        curveto stroke
        } def
/drawlabels 
        {
        } def
/drawlabeledcurve
        {
        packpoints 
        0 0 1 setrgbcolor drawdots        
        .5 0 .5 setrgbcolor drawcontrols
        1 0 0 setrgbcolor drawcurve
        } def
