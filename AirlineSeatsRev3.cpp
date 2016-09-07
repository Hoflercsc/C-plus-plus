//Jonathan Hofler & Jamie Green FLight Program 2/16/2016

#include <stdio.h>
#include <stdlib.h>

void printGreeting();
int getNextSeat(char seatClass, int seating[]);

int main(void)// function main begins program execution
{	
	char firstName[20]; // name of person
	char lastName[20];
	char email[100];
	char sClass; // seating Class
	int sNum; // seating number
	int i;
	int x = 1;
	int s[17]={0}; //initalizing 17 seating elements all elements set to zero
	
	printGreeting();
  	
	do {
    	 
	printf(" PLEASE ENTER YOUR FIRST NAME: ");//output
     scanf("%s", &firstName);fflush(stdin);//input
    
    
    printf("\n PlEASE ENTER YOUR LAST NAME: ");//output
    scanf("%s", &lastName);fflush(stdin);//input
    
    printf("\n WHAT IS EMAIL ADDRESS?  ");
    scanf("%s", &email); fflush(stdin);
    
    printf("\n WHICH CLASS DO YOU WANT? " );
    sClass = getchar(); 
     
	if (sClass == 'f' || sClass == 'F') {
  		printf( "\n\n  YOU SELECTED FIRST CLASS - > $500.00 PER SEAT ROUNDTRIP ANY LOCATION\n\n");
	    sNum = getNextSeat('f', s);
    
		if (sNum == -1) //-1 is full
		{ 
			printf("  First Class is Full\n\n");
			printf("  is prefered or economy acceptable yes or no ? ");
			char choice; // user choice
			fflush(stdin);
			scanf("%c", &choice );

			if ( choice =='y' ) {
				sNum = getNextSeat('p', s);
				if ( sNum == -1){
					printf("  Preffered Class is Full");
					sNum = getNextSeat('e', s);
					if ( sNum == -1) {
						printf(" %s%s \nYOU HAVE BEEN PLACED ON STAND BY",firstName,lastName);
						printf(" \nYOU WIL BE NOTIFIED IS SEAT BECOMES AVAILABLE");
						printf("  \nOTHERWISE --> NEXT FLIGHT LEAVING IN 3 HOURS");
						return 0;
					}
				}
			}
		}
	 } 
	 
	 else if (sClass == 'p' || sClass == 'P') {
		printf( "\n\n  YOU SELECTED PREFEERED CLASS - > $350.00 PER SEAT ROUNDTRIP ANY LOCATION\n\n");
		sNum = getNextSeat('p', s);
	    
		if (sNum == -1) //-1 is full
		{
			printf("  PREFEERED CLASS IS FULL");
			printf("  is ECONOMY ACCEPTABLE YES OR NO ?");
			char choice; // user choice
			fflush(stdin);
			scanf("%c", &choice );

			if ( choice =='y' ){
				sNum = getNextSeat('e', s);
				if ( sNum == -1){
					printf(" ECONOMY CLASS IS FULL");
					sNum = getNextSeat('f', s);
					if ( sNum == -1) {
						printf(" %s%s \nYOU HAVE BEEN PLACED ON STAND BY",firstName,lastName);
						printf(" \nYOU WIL BE NOTIFIED IS SEAT BECOMES AVAILABLE");
						printf("  \nOTHERWISE --> NEXT FLIGHT LEAVING IN 3 HOURS");
						return 0;
					}
				}
			}	     
		}
	} 
	  
	  else if (sClass == 'e' || sClass == 'E') {
		printf( "\n\n  YOU SELECTED ECONOMY CLASS - > $200.00 PER SEAT ROUNDTRIP ANY LOCATION\n\n");
		sNum = getNextSeat('e', s);
		
		if (sNum == -1) //-1 is full
		{
			printf("  ECONOMY CLASS IS FULL");
			printf("  IS PREFEERED ACCEPTABLE YES OR NO ?");
			char choice; // user choice
			fflush(stdin);
			scanf("%c", &choice );

			if ( choice =='y' ){
				sNum = getNextSeat('p', s);
				if ( sNum == -1){
					printf("  PREFEERED CLASS IS FULL");
					sNum = getNextSeat('f', s);
					if ( sNum == -1) {
						printf(" %s%s \nYOU HAVE BEEN PLACED ON STAND BY",firstName,lastName);
						printf(" \nYOU WIL BE NOTIFIED IS SEAT BECOMES AVAILABLE");
						printf("  \nOTHERWISE --> NEXT FLIGHT LEAVING IN 3 HOURS");
						return 0;
				  	}
				}
			}	     
		 }
	  }
	  
	   else {
	  	return 0;
	}
     
    // printf(" this is a test -array %d \n",s[sNum]);
    // printf(" The value stored - value %d\n", sNum);
	if (s[sNum] == 0 && sNum < 6){
	   //printf ("this worked\n\n");
	   s[sNum] = 1;
	   printf ("  FIRST CLASS SEAT SELECTED IS SEAT # %d\n\n", sNum + 1);
	   printf ("  YOUR FIRST CLASS SEAT HAS BEEN CONFIRMED %s %s\n\n", firstName,lastName);
	   printf ("  YOUR CONFIRMATION EMAIL HAS BEEN SENT TO --> %s\n\n", email  );
	   printf ("###############################################################\n");
	   printf ("#                                                             #\n");
	   printf ("#        CODE FLIGHT AIR LINES CONMFIRMATION EMAIL            #\n");
	   printf ("#                                                             #\n");
	   printf ("#           %s %s                                   #\n",firstName,lastName);
	   printf ("#           CLASS SELECTED --> (FIRST)                        #\n");
	   printf ("#           SEAT BOOKED -->    %d                              #\n",sNum + 1);
	   printf ("#           DESTINATION        NORFOLK, VA USA                #\n");
	   printf ("#                                                             #\n");
	   printf ("#        THANK YOU FOR YOUR FLIGHT RESERVATION                #\n");
	   printf ("#                                                             #\n");
	   printf ("###############################################################\n\n");
	  // printf ("  VALUE OF FIRST CLASS SEAT %d IN S[SNUM] = %d\n\n", sNum + 1, s[sNum]);
	   //printf ("The value of s[5] = %d", s[5]); for debugging purposes
	}
	else if (s[sNum] == 0 && sNum < 10) {
	   s[sNum] = 1;
	   printf ("  PREFERED CLASS SEAT SELECTED IS SEAT # %d\n\n", sNum + 1);
	   printf ("  YOUR PREFERED CLASS SEAT HAS BEEN CONFIRMED %s\n\n", firstName,lastName  );
	   printf ("  YOUR CONFIRMATION EMAIL HAS BEEN SENT TO --> %s\n\n", email  );
	   printf ("###############################################################\n");
	   printf ("#                                                             #\n");
	   printf ("#        CODE FLIGHT AIR LINES CONMFIRMATION EMAIL            #\n");
	   printf ("#                                                             #\n");
	   printf ("#           %s %s                                   #\n",firstName,lastName);
	   printf ("#           CLASS SELECTED --> (PREFERED)                     #\n");
	   printf ("#           SEAT BOOKED -->     %d                             #\n",sNum + 1);
	   printf ("#           DESTINATION        NORFOLK, VA USA                #\n");
	   printf ("#                                                             #\n");
	   printf ("#        THANK YOU FOR YOUR FLIGHT RESERVATION                #\n");
	   printf ("#                                                             #\n");
	   printf ("###############################################################\n\n");
	   //printf ("  VALUE OF PREFERED CLASS SEAT %d IN S[SNUM] = %d\n\n", sNum + 1, s[sNum]);
	   //printf ("The value of s[7] = %d", s[7]); //for debugging purposes
	}
	 else if (s[sNum] == 0 && sNum < 16) {
	   s[sNum] = 1;
	   printf ("  ECONOMY CLASS SEAT SELECTED IS SEAT # %d\n\n", sNum + 1);
	   printf ("  YOUR ECONOMY CLASS SEAT HAS BEEN CONFIRMED %s\n\n", firstName,lastName);
	   printf ("  YOUR CONFIRMATION EMAIL HAS BEEN SENT TO --> %s\n\n", email  );
	   printf ("###############################################################\n");
	   printf ("#                                                             #\n");
	   printf ("#        CODE FLIGHT AIR LINES CONMFIRMATION EMAIL            #\n");
	   printf ("#                                                             #\n");
	   printf ("#           %s %s                                   #\n",firstName,lastName);
	   printf ("#           CLASS SELECTED --> (ECONOMY)                      #\n");
	   printf ("#           SEAT BOOKED -->    %d                             #\n",sNum + 1);
	   printf ("#           DESTINATION        NORFOLK, VA USA                #\n");
	   printf ("#                                                             #\n");
	   printf ("#        THANK YOU FOR YOUR FLIGHT RESERVATION                #\n");
	   printf ("#                                                             #\n");
	   printf ("###############################################################\n\n");
	   //printf ("  VALUE OF ECONOMY CLASS SEAT %d IN S[SNUM] = %d\n\n", sNum + 1, s[sNum]);
	   //printf ("The value of s[5] = %d", s[5]); for debugging purposes
	}
	 else {
	   printf ("\n SEAT %d TAKEN OR SEAT NOT IN CLASS\n\n", sNum + 1);
	   printf (" PLEASE START OVER\n\n");
	 }
    
 } while(x > 0 );
	 
	system("PAUSE");
    return 0;
}


void printGreeting()
{
   printf("\n ########################################################################\n\n" );
	 printf("                  WELCOME TO ( CODE FLIGHT AIR LINES )\n\n\n " );     
   printf(" THE PURPOSE OF THIS SYSTEM IS TO ALLOW YOU TO BOOK SEATS IN THREE CATAGORIES\n\n");
   printf("                  THE AIRELINE SEATING CLASS ARE:\n\n");
   printf("                  F - FIRST CLASS 1, 2, 3, 4, 5, 6\n\n");               
	 printf("                  P - PREFEERED   7, 8, 9, 10, \n\n");
	 printf("                  E - ECONOMY     11, 12, 13, 14, 15, 16\n\n");     +
   printf("\n ########################################################################\n\n" );
}



int getNextSeat(char seatClass, int seating[])
{
	
	if (seatClass == 'f') { // First class.
  	for (int i = 0; i < 6; i++) {
    	if (seating[i] == 0) {
      	return i;
      }
    }
    return -1;
    
  } else if (seatClass == 'p') { // Preferred class.
   	for (int i = 6; i < 10; i++) {
    	if (seating[i] == 0) {
      	return i;
      }
    }
    return -1;
  } 
  
  else if (seatClass == 'e') { // Economy class.
  	 for (int i = 10; i < 16; i++) {
    	if (seating[i] == 0) {
      	return i;
      }
    }
    return -1;
  }
}

