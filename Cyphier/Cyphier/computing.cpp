//
//  computing.cpp
//  Cyphier
//
//  Created by Tushar Pandey on 23/04/18.
//  Copyright © 2018 Tushar Pandey. All rights reserved.
//

#include "computing.hpp" //hereby for getch and sleep functions, usually in my "theconio" but here we have this .hpp
#include <fstream>   //for the file operations
#include <stdio.h>
#include <string.h>  //for string inputs

/*
 this code shall take input in text from the user and then change the characters,in other words Encrypt the characters in the following way:-
 # change the ascii value as computed by the calculation phrase but change the ecnrypting phrase for every x charactes ,
        -where in x is calculated as an srand output number less than 100, and this number is predecided by the computer and varies document by documnent. this x will be the 3rd output of srand value. first two will be wasted in a form of continuous assignment to this variable x only.
        -we get te third value in x. then halve it untill it just becomes LESS THAN 100.
 # when made to encrypt a file, we input its name, full with the format as in "contemplation.pdf" or "testimony.docx" . then we identify the format, and incase te format doesn't exist in the file, we can leave this. After identifying the format it is replaced by a .txt format, hence making the file into a text file and we will append the format of the file into the file itself by the input streams just like we give input to other text files, like: if we have a ".pdf" file, we will change that to ".txt" first, then the pdf forat will be added to the file's starting as <.pdf/>
    i.e. the format will be terminating with the / character since no format is having a slash in it. this will help us to ensure we dont suck anything more or less from the enctrypted file
 # then the encryption process will begin as said in point 1. and the resulting text file will be produced and saved in the same directry as the original file was picked from.
 
 Once the code reaches to the point where it has completed the process of encryption the program will head on to a part of it, called herein as SHOUT.
 this part of the code will tweet the task details in the fromat of a shrt but well formatted statement having the following information:
 
 task type: Encryption or Decryption
 original file name:(not the text vesrion of it)
 size of the file (to be determined by some peice of code i'll obtain via external source)
 any machine information or something else
 
 
*/

using std::printf;
using std::scanf;
using std::string;
using std::ifstream;
using std::ofstream;


ofstream fileout;
ifstream filein;

int main()
{
    
    char trayChar;
    getche(trayChar);
    
    getch();
    return 0;
}
