#include <stdio.h>
#include <stdlib.h>


int main(void)// function main begins program execution

{
	char custOne[10];
    char custTwo[10];
    char sClass;
	int sNum;
	
	int s[17]={0}; //initalizing 17 element all elements set to zero
	
     printf("\n ########################################################################\n\n" );
	 printf("                  WELCOME TO ( CODE FLIGHT AIR LINES )\n\n\n " );
     //printf("\n -------------------------------------------------------------------------\n\n" );
     
     printf(" THE PURPOSE OF THIS SYSTEM IS TO ALLOW YOU TO BOOK SEATS IN THREE CATAGORIES\n\n");
     printf("                  THE AIRELINE SEATING CLASS ARE:\n\n");
     printf("                  1 - FIRST CLASS 1, 2, 3, 4, 5, 6\n\n");               
	 printf("                  2 - PREFEERED   7, 8, 9, 10, \n\n");
	 printf("                  3 - ECONOMY     11, 12, 13, 14, 15, 16\n\n");
     
     printf("\n ########################################################################\n\n" );
     
	// printf("  PRESS *** ENTER *** TO CONTINUE \n\n " );
	 
	 printf("  WHAT IS YOUR NAME\n\n\n  " );
	 scanf( "%s", &custOne );
     printf("\n\n  THANK YOU! %s\n\n\n", custOne );
     
     getchar(); 
     
     printf("  WHICH SEATING CLASS DO YOU WANT?\n\n  " );
     printf(" \n  F = FIRST CLASS 1, 2, 3, 4, 5, 6, \n\n  P = PREFEERED 7, 8, 9, 10,\n\n  E = ECONOMY 1, 12, 13, 14, 15, 16\n\n  " );
     scanf( "%s", &sClass );
     
      if (sClass == 'f' || sClass == 'F')
	 {
	 	printf( "\n\n  YOU SELECTED FIRST CLASS - > $500.00 PER SEAT ROUNDTRIP ANY LOCATION\n\n\n");
	 	printf("  WHICH SEAT NUMBER DO YOU WANT?\n\n " );
	 	printf(" \n  FIRST CLASS 1, 2, 3, 4, 5, 6, \n\n  ");
	 	scanf( " %d", &sNum );
	 	
	 }
	 else if (sClass == 'p' || sClass == 'P') {
	 	printf( "\n\n  YOU SELECTED PREFEERED CLASS - > $350.00 PER SEAT ROUNDTRIP ANY LOCATION\n\n");
	 	printf("  WHICH SEAT NUMBER DO YOU WANT?\n\n " );
	 	printf(" \n  P = PREFEERED 7, 8, 9, 10\n\n  ");
	 	scanf( "%d", &sNum );
     }
     else if (sClass == 'e' || sClass == 'E') {
	 	printf( "\n\n  YOU SELECTED ECONOMY CLASS - > $200.00 PER SEAT ROUNDTRIP ANY LOCATION\n\n\n");
	 	printf("  WHICH SEAT NUMBER DO YOU WANT?\n\n " );
	 	printf(" ECONOMY 11, 12, 13, 14, 15, 16 \n\n  " );
	 	scanf( " %d", &sNum );
     }
     else{ 
	 return 0;
	}
     
    // printf(" this is a test -array %d \n",s[sNum]);
    // printf(" The value stored - value %d\n", sNum);
     
     
     if (s[sNum] == 0 && sNum <= 6){
     	//printf ("this worked\n\n");
     	s[sNum] = 1;
     	printf ("\n\n  FIRST CLASS SEAT SELECTED IS SEAT # %d\n\n", sNum);
     	printf ("  VALUE OF FIRST CLASS SEAT %d IN S[SNUM] = %d\n\n", sNum, s[sNum]);
     	//printf ("The value of s[5] = %d", s[5]); for debugging purposes
     }
     else if (s[sNum] == 0 && sNum <= 10) {
     	s[sNum] = 1;
	 	printf ("\n\n  PREFERED CLASS SEAT SELECTED IS SEAT # %d\n\n", sNum);
     	printf ("  VALUE OF PREFERED CLASS SEAT %d IN S[SNUM] = %d\n\n", sNum, s[sNum]);
     	//printf ("The value of s[5] = %d", s[5]); for debugging purposes
     }
      else if (s[sNum] == 0 && sNum <= 16) {
     	s[sNum] = 1;
	 	printf ("\n\n  ECONOMY CLASS SEAT SELECTED IS SEAT # %d\n\n", sNum);
     	printf ("  VALUE OF ECONOMY CLASS SEAT %d IN S[SNUM] = %d\n\n", sNum, s[sNum]);
     	//printf ("The value of s[5] = %d", s[5]); for debugging purposes
     }
      else {
      	printf ("\n  SEAT %d TAKEN OR SEAT NOT IN CLASS\n\n", sNum);
      	printf ("  PLEASE START OVER\n\n");
	  }
     
	  } while(s[sNum] < 0 )
	 
	system("PAUSE");
    return 0;
}
