#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, nguess = 0, cguess = 0;
    printf("--------%c WELCOME TO NUMBER GUESSING GAME %c---------\n", 2, 2);
    printf("In This Game You Are Supposed To Guess A Number And \nIf Your Number Lies Between 65 and 90 You need Guess Character with Corresponding ASCII Value\n");
    srand(time(0));        // initializing random number generator
    num = rand() % 99 + 1; // to generate random number betwee 1 to 100;
    if (num > 64 && num < 91)
    { // condition to take input a number and ascii value since Upper case alphabet lies between 65 to 90;
        do
        {
            printf("\nGuess A Number Between 1 to 100:");
            scanf("%d", &guess);
            if (guess > num)
            {
                printf("\nPlease Enter Lower Number\n");
            }
            else if (guess < num)
            {
                printf("\nPlease Enter Greater Number\n");
            }
            else
            {
                char c = num, t; // asking for ascii value  if num==guess;
                do
                {
                    int r;
                    while ((r = getchar()) != '\n' && r != EOF); // it clears input buffer like in above scanf it may takes new line as character
                    printf("\nEnter Character Whose ASCII value is %d %c:", guess, 1);
                    scanf("%c", &t);
                    cguess++;
                } while (t != c);
                printf("\n*****YOU WIN!!!!!!*****\n");
            }
            nguess++;
        } while (guess != num);
        printf("You Guessed Number in %d Attempts\n", nguess);
        printf("You Guessed Character in %d Attempts\n", cguess);
    }
    else
    {
        do
        {
            printf("\nGuess A Number Between 1 to 100:");
            scanf("%d", &guess);
            if (guess > num)
            {
                printf("\nplease enter lower number\n");
            }
            else if (guess < num)
            {
                printf("\nplease enter greater number\n");
            }
            else
            {
                printf("\n*****YOU WIN!!!!!!*****\n");
            }
            nguess++;
        } while (guess != num);
        printf("\nYou Guessed Number in %d Attempts\n", nguess);
    }
    if (nguess < 5)
    {
        printf("\t***EXCELLENT***\n");
    }
    else if (nguess < 10)
    {
        printf("\t***GOOD***\n");
    }
    else
    {
        printf("\t***NOT BAD***\n");
    }
    printf("\n\t-----THANK YOU %c-----", 2);

    return 0;
}