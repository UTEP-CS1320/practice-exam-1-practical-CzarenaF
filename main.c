/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    //printf("Enter 2 numbers:\n");
    int x, y;
    scanf("%d %d", &x, &y);

    int x_digit = x % 10; //chnaged from / -> %
    int y_digit = y % 10; //chnaged from / -> %

    if(x_digit == y_digit) {
      printf ("TRUE");
    } 
    else { //completed else statement
      printf ("FALSE");
    }
    
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    //printf ("Enter ticket number:\n");
    //char winner[5] = "1234";
    char winner[5] = "7239"; 
    char ticket[5];

    scanf ("%s", ticket); //reads ticket number order

    // TODO: Your P2 code goes here
    int numberOrder; //variable to store ticket number order
    for (int i = 0; i < 5; ++i) { //checking matching numbers
      if (winner[i] == ticket[i]) { // if winner and ticker are matching
        numberOrder++;
      }
    }

    if(numberOrder == 5) { // If 5 all match
      printf ("1st Prize!\n");
    } else if (numberOrder == 4) { // If 4 only 3 numbers match
      printf ("2nd Prize!\n");
    } else if (numberOrder == 3) { // If 3 only 2 numbers match
      printf ("3rd Prize!\n");
    } else { //Anything less than 3 is not a winner
      printf ("No Prize! Better luck next time!\n");
    }
    
    /* Problem 2 End */
  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[5];
    scanf("%s", hex_in);

    //TODO: Your P3 code goes here
    
    /* Problem 3 End */
  }
}
