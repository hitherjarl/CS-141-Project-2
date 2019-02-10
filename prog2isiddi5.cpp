/*
 * Project 4: Trinity Game
 *
 *
 */
#include<stdio.h>


// Display your identifying information (Name, lab day and time)
void displayIdentifyingInformation()
{
    printf("Author: Mohamed Imran Mohamed Siddique \n");
    
    printf("Class: CS 141, Spring 2016 \n");
    
    printf("Program: Trinity Game \n");
    
    printf(" \n");
}



// Display the board.

void displayBoard(char p1,char p2,char p3,
                  
                  char p4,char p5, char p6,
                  
                  char p7,char p8, char p9,
                  
                  char c1,char c2,char c3,
                  
                  char c4,char c5, char c6,
                  
                  char c7,char c8, char c9 )
{
    
    
    
    
    printf("    %c %c %c \n", c1, c2, c3);
    printf("    %c %c %c \n", c4, c5, c6);
    printf("    %c %c %c \n", c7, c8, c9);
    printf(" -----------  Postitions:\n");
    printf("| %c | %c | %c |  1  2  3\n", p1, p2, p3);
    printf(" -----------\n");
    printf("| %c | %c | %c |  4  5  6\n", p4, p5, p6);
    printf(" -----------\n");
    printf("| %c | %c | %c |  7  8  9\n", p7, p8, p9);
    printf(" -----------\n");
    
}



// Make move by changing the appropriate variables.

void makeMove( char pieceToPlay, int position, char &p1,char &p2,char &p3,
              
              
              
              char &p4,char &p5, char &p6,char &p7,char &p8,
              
              char &p9, char &c1,char &c2,char &c3,
              
              
              
              char &c4,char &c5, char &c6,
              
              
              
              char &c7,char &c8, char &c9)

{//possible entries for letter A
    
    if( pieceToPlay==c1 && position==1) { p1=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==2) { p2=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==3) { p3=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==4) { p4=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==5) { p5=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==6) { p6=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==7) { p7=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==8) { p8=c1; c1=' ';}
    
    else if( pieceToPlay==c1 && position==9) { p9=c1; c1=' ';}
    
    //possible entries for letter B
    
    else if( pieceToPlay==c2 && position==1) { p1=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==2) { p2=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==3) { p3=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==4) { p4=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==5) { p5=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==6) { p6=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==7) { p7=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==8) { p8=c2; c2=' ';}
    
    else if( pieceToPlay==c2 && position==9) { p9=c2; c2=' ';}
    
    //possible entries for letter C
    
    else if( pieceToPlay==c3 && position==1) { p1=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==2) { p2=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==3) { p3=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==4) { p4=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==5) { p5=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==6) { p6=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==7) { p7=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==8) { p8=c3; c3=' ';}
    
    else if( pieceToPlay==c3 && position==9) { p9=c3; c3=' ';}
    
    //possible entries for number 1
    
    else if( pieceToPlay==c4 && position==1) { p1=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==2) { p2=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==3) { p3=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==4) { p4=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==5) { p5=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==6) { p6=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==7) { p7=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==8) { p8=c4; c4=' ';}
    
    else if( pieceToPlay==c4 && position==9) { p9=c4; c4=' ';}
    
    //possible entries for number 2
    
    
    else if( pieceToPlay==c5 && position==1) { p1=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==2) { p2=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==3) { p3=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==4) { p4=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==5) { p5=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==6) { p6=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==7) { p7=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==8) { p8=c5; c5=' ';}
    
    else if( pieceToPlay==c5 && position==9) { p9=c5; c5=' ';}
    
    //possible entries for number 3
    
    else if( pieceToPlay==c6 && position==1) { p1=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==2) { p2=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==3) { p3=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==4) { p4=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==5) { p5=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==6) { p6=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==7) { p7=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==8) { p8=c6; c6=' ';}
    
    else if( pieceToPlay==c6 && position==9) { p9=c6; c6=' ';}
    
    //possible entries for letter a
    
    else if( pieceToPlay==c7 && position==1) { p1=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==2) { p2=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==3) { p3=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==4) { p4=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==5) { p5=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==6) { p6=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==7) { p7=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==8) { p8=c7; c7=' ';}
    
    else if( pieceToPlay==c7 && position==9) { p9=c7; c7=' ';}
    
    //possible entries for letter b
    
    else if( pieceToPlay==c8 && position==1) { p1=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==2) { p2=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==3) { p3=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==4) { p4=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==5) { p5=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==6) { p6=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==7) { p7=c8; c7=' ';}
    
    else if( pieceToPlay==c8 && position==8) { p8=c8; c8=' ';}
    
    else if( pieceToPlay==c8 && position==9) { p9=c8; c8=' ';}
    
    //possible entries for letter c
    
    else if( pieceToPlay==c9 && position==1) { p1=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==2) { p2=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==3) { p3=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==4) { p4=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==5) { p5=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==6) { p6=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==7) { p7=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==8) { p8=c9; c9=' ';}
    
    else if( pieceToPlay==c9 && position==9) { p9=c9; c9=' ';}
    
    else (printf("\nInvalid Move \n"));
    
    
    
}


int main(){
    
    // declare variables to represent the board
    
    char p1 = ' ', p2 = ' ', p3 = ' ', p4 = ' ', p5 = ' ',p6 = ' ', p7 = ' ', p8 = ' ', p9 = ' ';
    
    char c1 = 65, c2 = 66, c3 = 67, c4 = 49, c5 = 50,c6 = 51, c7 = 97, c8 = 98, c9 = 99;
    
    // stores from and to square indices for a mvoe
    
    int finished = 0; // 0 if not finished, 1 if destination was reached
    
    int i;
    
    int moveTurn = 0;
    
    int playerToMove = 1;
    
    
    
    // display identifying information
    
    displayIdentifyingInformation();
    
    
    
    
    
    
    
    // Run the game. Note that !finished means "Not finished"
    
    while( ! finished) {
        
        
        
        // display board while scan is in loop for 9 times. since there are 9 boxes.
        
        for (i=10; i>moveTurn; moveTurn++){
            
            if (moveTurn%2==0){
                
                printf("Player %d Please enter a move:", playerToMove);
                
            }
            
            else {printf("Player %d Please enter a move: ", playerToMove+1);}
            
            printf("\nMove Count: %d\n", moveTurn);
            
            printf("Pieces available to play: \n");
            
            displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
            
            
            
            // prompt for move, assuming perfect input from user
            
            char pieceToPlay; int position;
            
            
            
            scanf("%c %d", &pieceToPlay, &position);
            
            
            
            //moves the userInput into the right position
            
            makeMove( pieceToPlay,position, p1, p2, p3,
                     
                     
                     
                     p4, p5, p6, p7,
                     
                     
                     
                     p8, p9, c1, c2, c3,
                     
                     
                     
                     c4, c5, c6, c7,
                     
                     
                     
                     c8, c9);
            
            
            
            
            
            
            
            
            
            //Checks all twelve of the winning conditions
            
            if (p1+p2+p3==198 || p4+p5+p6==198 || p7+p8+p9==198) {
                
                finished = 1;
                
            file:///D|/Dropbox/Desktop/New%20folder/prog2isiddi5.txt[2/14/2016 11:24:05]
                
                // Display the final board
                
                printf("Congratulations, you win with ABC \n");
                
                displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
                
                break;
                
                
                
            }
            
            else if (p1+p2+p3==151 || p4+p5+p6==151 || p7+p8+p9==151) {
                
                finished = 1;
                
                // Display the final board
                
                printf("Congratulations, you win with 123 \n");
                
                displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
                
                break;
                
            }
            
            else if (p1+p2+p3==294 || p4+p5+p6==294 || p7+p8+p9==294) {
                
                finished = 1;
                
                // Display the final board
                
                printf("Congratulations, you win with abc \n");
                
                displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
                
                break;
                
                
                
            }
            
            
            
            if (p1+p4+p7==211 || p2+p5+p8==211 || p3+p6+p9==211) {
                
                finished = 1;
                
                // Display the final board
                
                printf("Congratulations, you win with 1Aa \n");
                
                displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
                
                break;
                
            }
            
            if (p1+p4+p7==214 || p2+p5+p8==214 || p3+p6+p9==214) {
                
                finished = 1;
                
                // Display the final board
                
                printf("Congratulations, you win with one of each set \n");
                
                displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
                
                break;
                
            }
            
            if (p1+p4+p7==217 || p2+p5+p8==217 || p3+p6+p9==217) {
                
                finished = 1;
                
                // Display the final board
                
                printf("Congratulations, you win with 3Cc \n");
                
                displayBoard(p1,p2,p3,p4,p5,p6,p7,p8,p9,c1,c2,c3,c4,c5,c6,c7,c8,c9);
                
                break;
                
            }
            
            
            
        }
        
        
        
        
        
        
        
        
        
    }//end while( finished...)
    
    
    
}//end main()