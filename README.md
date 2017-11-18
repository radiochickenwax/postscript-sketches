# postscript-sketches
Sketches in the postscript language

These postscript libraries are an attempt to distill and refine some hobby work over the past couple decades.  
This still has relevant use cases today, but it will take some thought, time and energy to scrape off the dust.

TODO:  add use cases, implications, images, etc.

Sample Use Cases:
1. Animating gifs
2. Making plots
   - 5.1 Bode plots https://en.wikibooks.org/wiki/Control_Systems/Bode_Plots
   - 5.2 Nyquist plots https://en.wikipedia.org/wiki/Nyquist_plot
   - 5.3 Smith chart https://en.wikipedia.org/wiki/Smith_chart
   - These were plot types that I needed to make quite often as an engineering student.  There were other ways to make them: i.e. MATLAB, python, etc... but they usually did not provide the level of control or speed that postscript did.
3. Making fonts
4. Brainstorming
5. Making highly performant math based UIs
   - https://en.wikipedia.org/wiki/Display_PostScript
   - This idea of this very old display engine is much more appealing to me than using the convoluted and byzantine xorg system.  If I were to redesign a windowing system from scratch, I would like to consider this approach.   Note that at the time of this writing, the wikipedia article above references Mac OS X's Quartz 2D window system to use a PostScript style imaging system - however this is based more around the PDF imaging model and less around the PS language model.  As I currently understand things, PS is a turing complete language that happens to be engineered around an image model (https://en.wikipedia.org/wiki/Turing_completeness) where PDF is a more articulated imaging model necessitating more articulated engines and machinery to implement the model.   The distinction and evolution of the imaging model and the eventual removal of the language is a fascinating study of computer archeology and anthropology.
6. Algorithm exploration and visualization
7. Language Design
