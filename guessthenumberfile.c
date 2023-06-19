#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char choice;
    do
    {
        int number, guess;
        int guessNum = 0;
        srand(time(0));
        number = rand() % 100 + 1;
        // printf("%d \n", number);
        printf("Enter a number between 1 and 100: \n");
        do
        {
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Enter a lower number\n");
            }
            else if (guess < number)
            {
                printf("Enter a higher number\n");
            }
            else
            {
                printf("You guessed the number in %d attempts\n", guessNum);
            }
            guessNum++;
        } while (guess != number);

        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Thank you for playing!\n");

    return 0;
}