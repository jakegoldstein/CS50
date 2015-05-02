/*
*mario.c
*Created by Jake Goldstein
*finished on 5/1/2015
*for problem set 1 of CS50
*/

#include <stdio.h> 
#include <cs50.h> //imports the CS50 library for the GetInt() function

int main(int argc, const char * argv[]) {
 int height;

 do {
 printf("Please give a height from 1-23.\n");
 height = GetInt(); //gets the height from the user
 if ( height >23 || height <0){
 printf("That's not valid.\n");}
 }


while (height > 23 || height < 0);

    
    for ( int counter = 1 ; counter <= height; counter++) { //creates counter for usage in loops
       
         for (int spaces = height - counter; spaces > 0 ; spaces -- ) { //loop for how many spaces will be printed
        printf(" ");
        }
       

        
        for (int hashes = 0; hashes <= counter; hashes++) { // loop for how many hashes will be printed
          
            
            printf("#");
        }
       
       
        
        
        printf("\n"); //newline
        
       
        
    }
    return 0;
}
