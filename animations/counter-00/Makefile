gif : pngs  
	convert -delay 10 -loop 0 *.png counter00.gif	
	rm counter*.png
	animate counter00.gif

pngs : counter.ps
	gs -dBATCH -dNOPAUSE -dTextAlphaBits=4 -dGraphicsAlphaBits=4 -sDEVICE=png16m  -sOutputFile=counter%02d.png counter.ps

clean: 
	rm counter*.png
	rm  counter*.gif

