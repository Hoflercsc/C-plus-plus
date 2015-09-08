/* Work 2 in C */
    
     #include <stdio.h>
      int main( void )
    {
     char answer;
     char answer1;
     char answer2; 
     char answer3;
     printf ("\nThis program will determine if you are qualified to vote.\n");
     printf ("In order to qualify the following 4 questions must be true\n");
     printf ("If they are not you dont qualify\n");
     
     printf ("\nAre you 18 years old or older? Y or N?\n");
     scanf ("%c", &answer); 
             
     getchar(); /* pauses program */
     
     if (answer == 'y' || answer =='Y')
      {
         printf ("\nGood\n");
      }
      
     else if ( answer == 'n' || answer == 'N')
      {
         printf ("you don't qualify.");
         getchar(); /* pauses program */
         return 0; /* indicate that program execution */  
      }
      
      else 
      {
        printf ("you don't qualify.");
        getchar(); /* pauses program */
        return 0; /* indicate that program execution */  
        
      }
      
     
     /* 2nd question to ask */
      
     printf ("\nAre you a citizen of the united states? Y or N?\n");
     scanf ("%c", &answer1);
      
      if (answer1 == 'y' || answer1 =='Y')
      {
         printf ("\nGood\n");
         getchar(); /* pauses program */
      }
      
     else if ( answer1 == 'n' || answer1 == 'N')
      {
         printf ("you don't qualify.");
         getchar(); /* pauses program */
        return 0; /* indicate that program execution */ 
      }
      
      else 
      {
        printf ("you dont qualify");
        getchar(); /* pauses program */
        return 0; /* indicate that program execution */ 
      }
      

/* 3rd question to ask*/

     printf ("\nAre you a convicted felon? Y or N?\n");
     scanf ("%c", &answer2);
      
      if (answer2 == 'y' || answer2 =='Y')
      {
         printf ("you dont qualify");
         getchar(); /* pauses program */
         return 0; /* indicate that program execution */
      }
      
     else if ( answer2 == 'n' || answer2 == 'N')
      {
         printf ("\nGood\n"); 
         getchar(); /* pauses program */
      }
      
      else 
      {
        printf ("you dont qualify");
        getchar(); /* pauses program */
        return 0; /* indicate that program execution */ 
      }
      
     /* 4th question */
     
     printf ("\nAre you registered to vote? Y or N?\n");
     scanf ("%c", &answer3);
      
      if (answer3 == 'y' || answer3 =='Y')
      {
         printf ("\nGood\n");
         printf ("\nThank you for taking this test\n\n");
         printf ("\n YOU QUALIFY TO VOTE!!\n");
         getchar(); /* pauses program */
      }
      
     else if ( answer3 == 'n' || answer3 == 'N')
      {
         printf ("you dont qualify\n"); 
         getchar(); /* pauses program */
         return 0; /* indicate that program execution */
      }
      
      else 
      {
        printf ("you dont qualify");
        getchar(); /* pauses program */
        return 0; /* indicate that program execution */ 
      }    
      
 getchar(); /* pauses program */
}
