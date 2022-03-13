/* Name         : Sohan Vishmith D Souza
   Date         : 12/03/2022
   Description  : The user entered number should identified whether its a odd or a even number. Mention its sign too.
   input        : Integer 'N'. 
   output       : Enter the value of 'n' : -2
                  -2 is negative even number
                  
                  Enter the value of 'n' : 2
                  2 is positive even number

                  Enter the value of 'n' : 0
                  
                  0 is neither odd nor even
   */
   

#include <stdio.h>

int main() 
{
    int num; // declare num
    printf("Enter the value of 'n': \n"); 
    scanf("%d", &num); // taking input from user
      if ( num > 0 ) // condition to check num is greater than 0
      {
        if ( num % 2 == 0 ) // condition to check no. is odd or even
        {
          printf("%d is a positive even number", num); // print +ve even no.
          
        }
          else
        {
          printf("%d is a positive odd number", num); // print -ve odd no.
        }
      }
      else if ( num < 0 ) // check num less than 0
      {
            if ( num % 2 != 0 ) // num odd or even
             {
             printf("%d is a negative odd number", num); // print -ve odd no.
          
             }
             else
             { 
             printf("%d is a negative even number", num); // print +ve even no.
          
             }
  }
  else // to check odd is neither odd or even
  {
  printf("%d is neither odd nor even", num);
  }
  return 0;
      }
