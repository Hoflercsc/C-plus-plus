/* // Jonathan Hofler Tic Tac Toe Game 02/14/2016
I have my fuctions outside of my main fuction i feel this would be easier since I 
wouldnt have to do everything inside the main. Instead all I would have to do is call
the functions I want from the main.
*/

#include <stdio.h>
#include <stdlib.h>

char board[3][3]= {'1','2','3','4','5','6','7','8','9'};  
int player = 'X';
int n;

void drawTable()
{   
    //system("cls"); optional
	for(int r = 0; r < 3; r++) // r is for rows
	{
		for (int c = 0; c < 3; c++) // c is for colums
		{
		   printf(" %c", board[r][c]); // row = r, colums = c
		   printf(" "); // 3 spaces
		}	
		printf("\n");
	}
}

void userInput() // function allows user to interact with the game
{
	int a; // user types in field number
	printf("\n It's %c turn. Type the number you want: ", player); // player variable shows whoes go it is 
	fflush(stdin);
	scanf("%d", &a); // game board field selection
	printf("\n");
	
	if (a == 1)
	{
	   if (board[0][0] == '1')
	       board[0][0] = player;
	   else
	   {
	   		printf(" Field already taken try agian\n");
	   		userInput();
	   }
   }
  else if (a == 2)
	{
		if (board[0][1] == '2')
			board[0][1] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
   
    else if (a == 3)
	{
		if (board[0][2] == '3')
			board[0][2] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
   
    else if (a == 4)
	{
		if (board[1][0] == '4')
			board[1][0] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
		
	  else if (a == 5)
	{
		if (board[1][1] == '5')
			board[1][1] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
   
     else if (a == 6)
	{
		if (board[1][2] == '6')
			board[1][2] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
   
     else if (a == 7)
	{
		if (board[2][0] == '7')
			board[2][0] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
	else if (a == 8)
	{
		if (board[2][1] == '8')
			board[2][1] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }	
    else if (a == 9)
		{
		if (board[2][2] == '9')
			board[2][2] = player;	
		else
	   {
	   		printf(" Field already taken try agian!\n");
	   		userInput();
	   }
   }
}

void TogglePlayer() // function that switches between player 1 'X' and player 2 'O'
{
	if (player == 'X')
	    player = 'O';
	else
	    player = 'X';
}


char Win()
{
	// manuelly checking the game board for every posibility for X and O players
	
	// 1st player player 1
	
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';
	
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';
	
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';
	
	// 2nd player player 2
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'O';
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';
	
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';
	
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';
	
	return '/';
}

void manual()
{
	printf("\n (1) 2 players are needed for this game.\n");
	printf(" (2) Player 1 is X, Player 2 is O.\n");
	printf(" (3) To play a spot on the board select the numeric field\n     number you want and press enter.\n");
	printf(" (4) The player that gets 3 in a row wins.\n");
}
// beigining of main program --------------------------------------------------------
int main(void)
{
	   
	   printf ("###############################################################\n");
	   printf ("#                                                             #\n");
	   printf ("#           TIC TAC TOE - CREATED BY JONATHAN HOFLER          #\n");
	   printf ("#                     CREATED IN C/C++                        #\n");
	   printf ("#                                                             #\n");
	   printf ("#                      PLAYER 1 = X                           #\n");
	   printf ("#                                                             #\n");
	   printf ("#                      PLAYER 2 = O                           #\n");
	   printf ("#                                                             #\n");
	   printf ("#                      LETS PLAY!                             #\n");
	   printf ("#                                                             #\n");
	   printf ("###############################################################\n\n");
	   
	   	int x = 1;
		n = 0;
		char choice; 
	
	   printf("\n Do you want to read the manual? y or n ");
  	   scanf("%c", &choice );
  	   if (choice == 'y')
  		{
  			manual();
		}
	    	
	    printf("\n                X - GO -> 1st, O - GO -> 2nd\n\n");
  		drawTable();// 1st -draws the game board for user to see
  	
  	while(x > 0) // while loop
  	{
  		n++; 		
  		userInput();// 2nd - takes in move selection from the player 
  		drawTable();// 3rd - draws out the board agian
  		
  		if (Win() == 'X') // if stament for X if X wins
  		{
  			printf("\n");
			printf(" X WINS!\n");
			printf("\n Sorry player 2!\n");
  			printf("\n");
  			break;
		}
		else if (Win() == 'O') // if statwment for O if O wins
		{
			printf("\n O WINS!\n");
			printf("\n Sorry player 1!\n");
  			break;
		}
		
		else if (Win() == '/' && n == 9) // staments occurs if there is a draw
		{
			printf("its a draw!");
		}
  	 
  		TogglePlayer();// 4th - switches between players X and O
  }
  
  system("pause");	
  return 0;	
}// ending of main program -------------------------------------------------------------
