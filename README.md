# macrokeyboard
Source code for my open source macro-keyboard

This is the source code for my macro-keyboard created with a Pro-Micro Arduino. 

# YouTube Build Video's 

Macro-keyboard part 1 -Construction
https://youtu.be/gCawkMGU2Rg

Macro-keyboard part 2 - Testing
https://youtu.be/TpiGVjqkxLY

Macro-Keyboard part 3 - Initial programming
https://youtu.be/YSDWSIaq9do

# Glamor Shots
![Image-1](/rsc/Macro-Keyboard-1-500.JPG)
![Image-2](/rsc/Macro-Keyboard-2-500.JPG)

# 3D Printed Case STL Files
Case by Stefano Piaz (MakerStep) and available on Thingiverse. 
https://www.thingiverse.com/thing:1211720

# Folder Structure

    .
    ├── rsc                         # resoure files
    └── andresen-macropad-source    # ino files for programming the Pro-Micro - this is how I have my macros programmed. 
    └── andresen-macropad-template  # ino files for programming the Pro-Micro - Vanilla template with 112 macros programmed. 
    
    
# Code Details
The current code that is published was a ground up re-write that added in licensing, better code-comments and the concept of macro pages with theoretical support up to 96 macros. The current code takes 29% of program memory on a pro-micro. 
