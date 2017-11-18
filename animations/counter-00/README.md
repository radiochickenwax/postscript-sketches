# Counter00

This is a simple example of how to generate a gif using imagemagick and ghostscript on a .nix platform.  

![counter](https://github.com/radiochickenwax/postscript-sketches/blob/master/animations/counter-00/counter00.gif)

To generate the gif:

> make gif

The [PostScript](https://github.com/radiochickenwax/postscript-sketches/blob/master/animations/counter-00/counter.ps) generates 50 numbered pages.  

> make pngs

Will generate 50 image files which imagemagick then combines into a gif.
