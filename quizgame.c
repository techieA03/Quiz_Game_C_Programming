#include <stdio.h>

int main()
{
    int score = 0;
    char choice;
    int answer;

    do
    {
        printf("\nWelcome to the Quiz Game!\n");
        printf("Choose a question:\n");
        printf("1. What is the capital of India?\n");
        printf("   1) Mumbai\n   2) New Delhi\n   3) Kolkata\n   4) Chennai\n");
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong. The correct answer is 2) New Delhi.\n");
        }

        printf("\n2. What is 5 * 6?\n");
        printf("   1) 30\n   2) 25\n   3) 20\n   4) 35\n");
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);

        if (answer == 1)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong. The correct answer is 1) 30.\n");
        }

        printf("\nDo you want to try the quiz again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nGame Over! Your final score: %d\n", score);

    return 0;
}
