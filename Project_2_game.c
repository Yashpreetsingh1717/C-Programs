#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator with the current time
    int choice;

    // Prompt the user to choose a game
    printf("Welcome to this game.\nChoose 1 to play \"Rock, Paper, Scissor\" or 2 to play \"Snake, Water, Gun\"\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Game 1: Rock, Paper, Scissor
        // 0 --> Rock
        // 1 --> Paper
        // 2 --> Scissor
        while (1)
        {
            int player, computer = rand() % 3; // Generate a random choice for the computer
            printf("Enter 0 for Rock, 1 for Paper and 2 for Scissor\n");
            printf("To exit, press any other number\n");
            scanf("%d", &player);
            printf("Computer chose: %d\n", computer); // Display the computer's choice

            // Check for a draw
            if ((player == 0 && computer == 0) || (player == 1 && computer == 1) || (player == 2 && computer == 2))
            {
                printf("It's a draw!!!\n");
                printf("--------------------------\n");
            }
            // Check if the computer wins
            else if (player == 0 && computer == 1 || player == 1 && computer == 2 || player == 2 && computer == 0)
            {
                printf("!!Computer Wins!!\n");
                printf("--------------------------\n");
            }
            // Check if the player wins
            else if (player == 0 && computer == 2 || player == 1 && computer == 0 || player == 2 && computer == 1)
            {
                printf("!!You Win!!\n");
                printf("--------------------------\n");
            }
            else
            {
                // Handle invalid input and exit the loop
                printf("<-----You chose an invalid input----->\n");
                printf("---You are Exiting---\n");
                break;
            }
        }
    }
    else if (choice == 2)
    {
        // Game 2: Snake, Water, Gun
        // 0 --> Snake
        // 1 --> Water
        // 2 --> Gun
        while (1)
        {
            int player, computer = rand() % 3; // Generate a random choice for the computer
            printf("Enter 0 for Snake, 1 for Water and 2 for Gun\n");
            printf("To exit, press any other number\n");
            scanf("%d", &player);
            printf("Computer chose: %d\n", computer); // Display the computer's choice

            // Check for a draw
            if ((player == 0 && computer == 0) || (player == 1 && computer == 1) || (player == 2 && computer == 2))
            {
                printf("It's a draw!!!\n");
                printf("--------------------------\n");
            }
            // Check if the player wins
            else if (player == 0 && computer == 1 || player == 1 && computer == 2 || player == 2 && computer == 0)
            {
                printf("!!You Win!!\n");
                printf("--------------------------\n");
            }
            // Check if the computer wins
            else if (player == 0 && computer == 2 || player == 1 && computer == 0 || player == 2 && computer == 1)
            {
                printf("!!Computer Wins!!\n");
                printf("--------------------------\n");
            }
            else
            {
                // Handle invalid input and exit the loop
                printf("<-----You chose an invalid input----->\n");
                printf("---You are Exiting---\n");
                break;
            }
        }
    }
    else
    {
        // Handle invalid game selection
        printf("---Invalid Input---\n---You are Exiting---\n");
    }

    return 0;
}
