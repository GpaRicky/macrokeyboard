/**********************************************************************************
 *  Filename: andresen-macro-source.ino
 *  Description:  
 *  The Macropad is a device used to autmate a variety of keystrokes 
 *  by acting as a USB Human Interface Device the macropad simply 
 *  appears as a keyboard to a variety of devices.
 *  
 *  Author: Eric Andresen         Start Date: May 19th, 2020
 *  EMAIL: andresen.eric@gmail.com 
 *  Website: http://www.ericandresen.me 
 *  Changes 
 *    1.0 Initial Release ....
 *    
 *License
 *  MIT License
 *
 *  Copyright (c) 2020 Eric Andresen
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *  
 **********************************************************************************/

 //Include external libraries

#include <Keypad.h>    //Used to interface with the 4x4 keypad
#include <Keyboard.h>  //Used to emulate a HID device - Keyboad
#include <Mouse.h>     //Used to emulate a HID Device - Mouse

//Global Constants
const byte ROWS = 4;  //four rows
const byte COLS = 4;  //four columns
    
int Page = 1; //Create a variable to track what page of macros are loaded

// the library will return the character inside this array
// when the appropriate button is pressed.

char keys[ROWS][COLS] = {

{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'},
};


byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9 }; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup() {

      Serial.begin(9600);
      Keyboard.begin();
      Mouse.begin();
      }

void loop() {

    char key = keypad.getKey();

    if (key) {
        Serial.println(key);

      if (key == 'B'){
        if (Page > 1) {
          --Page;
         Serial.println(Page);
        }
      }

    if (key == 'C'){
            if (Page < 8) {
              Page++;
             Serial.println(Page);
            }
          }

          switch (key) {

    case '1':
                  if (Page==1) {
                  //Macro Page 1 - Key 1 
                  Keyboard.print("Page 1 - Key 1\n");
                  Keyboard.releaseAll();
                break;                    
                  }
 
                  if (Page==2) {
                  //Macro Page 2 - Key 1 
                  Keyboard.print("Page 2 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==3) {
                  //Macro Page 3 - Key 1 
                  Keyboard.print("Page 3 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                 if (Page==4) {
                  //Macro Page 4 - Key 1 
                  Keyboard.print("Page 4 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                  if (Page==5) {
                  //Macro Page 5 - Key 1 
                  Keyboard.print("Page 5 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                if (Page==6) {
                  //Macro Page 6 - Key 1 
                  Keyboard.print("Page 6 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==7) {
                  //Macro Page 7 - Key 1 
                  Keyboard.print("Page 7 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==8) {
                  //Macro Page 8 - Key 1 
                  Keyboard.print("Page 8 - Key 1\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
    case '2':
                  if (Page==1) {
                  //Macro Page 1 - Key 2 
                  Keyboard.print("Page 1 - Key 2\n");
                  Keyboard.releaseAll();
                break;                    
                  }
 
                  if (Page==2) {
                  //Macro Page 2 - Key 2 
                  Keyboard.print("Page 2 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==3) {
                  //Macro Page 3 - Key 2 
                  Keyboard.print("Page 3 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                 if (Page==4) {
                  //Macro Page 4 - Key 2 
                  Keyboard.print("Page 4 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                  if (Page==5) {
                  //Macro Page 5 - Key 1 
                  Keyboard.print("Page 5 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                if (Page==6) {
                  //Macro Page 6 - Key 2 
                  Keyboard.print("Page 6 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==7) {
                  //Macro Page 7 - Key 2 
                  Keyboard.print("Page 7 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==8) {
                  //Macro Page 8 - Key 2 
                  Keyboard.print("Page 8 - Key 2\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
    case '3':
                  if (Page==1) {
                  //Macro Page 1 - Key 3
                  Keyboard.print("Page 1 - Key 3\n");
                  Keyboard.releaseAll();
                break;                    
                  }
 
                  if (Page==2) {
                  //Macro Page 2 - Key 3 
                  Keyboard.print("Page 2 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==3) {
                  //Macro Page 3 - Key 3 
                  Keyboard.print("Page 3 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                 if (Page==4) {
                  //Macro Page 4 - Key 3 
                  Keyboard.print("Page 4 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                  if (Page==5) {
                  //Macro Page 5 - Key 3 
                  Keyboard.print("Page 5 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                if (Page==6) {
                  //Macro Page 6 - Key 3 
                  Keyboard.print("Page 6 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==7) {
                  //Macro Page 7 - Key 3 
                  Keyboard.print("Page 7 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==8) {
                  //Macro Page 8 - Key 3 
                  Keyboard.print("Page 8 - Key 3\n");
                  Keyboard.releaseAll();                break;                    
                  }                
    case '4':
                  if (Page==1) {
                  //Macro Page 1 - Key 4 
                  Keyboard.print("Page 1 - Key 4\n");
                  Keyboard.releaseAll();
                break;                    
                  }
 
                  if (Page==2) {
                  //Macro Page 2 - Key 4 
                  Keyboard.print("Page 2 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==3) {
                  //Macro Page 3 - Key 4 
                  Keyboard.print("Page 3 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                 if (Page==4) {
                  //Macro Page 4 - Key 4 
                  Keyboard.print("Page 4 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                  if (Page==5) {
                  //Macro Page 5 - Key 4 
                  Keyboard.print("Page 5 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                
                
                if (Page==6) {
                  //Macro Page 6 - Key 4 
                  Keyboard.print("Page 6 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==7) {
                  //Macro Page 7 - Key 4 
                  Keyboard.print("Page 7 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                

                if (Page==8) {
                  //Macro Page 8 - Key 4 
                  Keyboard.print("Page 8 - Key 4\n");
                  Keyboard.releaseAll();                break;                    
                  }                


     case '5':
                  if (Page==1) {
                  //Select a word
                  Mouse.click();
                  Mouse.release();
                  Mouse.click();
                  Mouse.release();
                break;
                  }

                if (Page==2) {
                 //Launch Chrome
                 Keyboard.press(KEY_LEFT_GUI);
                 Keyboard.release(KEY_LEFT_GUI);
                 delay(1000);
                 Keyboard.write('c');
                 Keyboard.write('h');
                 Keyboard.write('r');
                 Keyboard.write('o');
                 Keyboard.write('m');
                 Keyboard.write('e');
                 delay(100);
                 Keyboard.press(KEY_RETURN);
                 Keyboard.releaseAll();                   
                 break;                    
                  }


    case '6':
                  if (Page==1) {
                  //Press End
                  Keyboard.press(KEY_END);
                  Keyboard.releaseAll();
                break;
                  }

                if (Page==2) {
                //Launch Terminal
                 Keyboard.press(KEY_LEFT_GUI);
                 Keyboard.release(KEY_LEFT_GUI);
                 delay(1000);
                 Keyboard.write('c');
                 Keyboard.write('m');
                 Keyboard.write('d');
                 delay(100);
                 Keyboard.press(KEY_RETURN);
                 Keyboard.releaseAll();  
                  
                 break;                    
                  }


     case '7':
                  if (Page==1) {
                  //Pess Page Down
                  Keyboard.press(KEY_PAGE_DOWN);  
                  Keyboard.releaseAll();
                break;
                  }

                  if (Page==2) {
                 //Launch Sublime
                 Keyboard.press(KEY_LEFT_GUI);
                 Keyboard.release(KEY_LEFT_GUI);
                 delay(1000);
                 Keyboard.write('s');
                 Keyboard.write('u');
                 Keyboard.write('b');
                 Keyboard.write('l');
                 Keyboard.write('i');
                 Keyboard.write('m');
                 Keyboard.write('e');
                 delay(100);
                 Keyboard.press(KEY_RETURN);
                 Keyboard.releaseAll();   
                break;                    
                  }

     case '8':
                  if (Page==1) {
                  //Press Document End
                  Keyboard.press(KEY_LEFT_CTRL);
                  Keyboard.press(KEY_END);  
                  Keyboard.releaseAll();
                break;
                  }

                  if (Page==2) {
                  //Launch Arduino IDE
                 Keyboard.press(KEY_LEFT_GUI);
                 Keyboard.release(KEY_LEFT_GUI);
                 delay(1000);
                 Keyboard.write('a');
                 Keyboard.write('r');
                 Keyboard.write('d');
                 Keyboard.write('u');
                 Keyboard.write('i');
                 Keyboard.write('n');
                 Keyboard.write('o');
                 delay(100);
                 Keyboard.press(KEY_RETURN);
                 Keyboard.releaseAll();   
                  
                break;                    
                  }

     case '9':
                  if (Page==1) {
                  //Press Document 
                  Keyboard.press(KEY_DOWN_ARROW);
                  Keyboard.releaseAll();
                break;
                  }

                  if (Page==2) {
                  //Page two goes here 
                  
                break;                    
                  }

     case '0':
                  if (Page==1) {
                  //Press Document 
                  //Select a word
                  Mouse.click();
                  Mouse.release();
                  Mouse.click();
                  Mouse.release();
                  Mouse.click();
                  Mouse.release();
                break;
                  }

                  if (Page==2) {
                  //Page two goes here 
                  
                break;                    
                  }
     case 'D':
                  if (Page==1) {
                  //Lock a windows workstation
                  Keyboard.press(KEY_LEFT_GUI);
                  Keyboard.write('l');
                  Keyboard.releaseAll();
                break;
                  }

                  if (Page==2) {
                  //Page two goes here 
                  
                break;                    
                  }


             
}

delay (100);
Keyboard.releaseAll(); // this releases the buttons
Mouse.release();
    }
    }
