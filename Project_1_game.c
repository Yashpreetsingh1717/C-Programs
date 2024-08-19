// Project 1: Number Gussing game

/*We will write a program that generates a random number and asks the player to guess it.
If the player's guess is less than the actual number, the program displays
"Lower number please."
Similarly, if the users guess is too low, the program prints
"Higher number please"
When the user guesses the correct number, the program diaplays the number of guesses the player used to arrive at the number*/

// Hint: Use loop and use a random number generator.

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    //  Initialize random number generator
    srand(time(0));

    // generate randm number between 1 to 100
    int random_number = (rand() % 100)+1;
    int no_of_guesses = 0;
    int guessed_number;
    
    do{
        printf("Guess the number.");
        scanf("%d",&guessed_number);
        if(guessed_number>random_number){
            printf("Lower Number Please! \n");
        }else if(guessed_number<random_number){
            printf("Higher Number Please! \n");
        }else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    }   while (guessed_number != random_number);

    printf("You guessed_number the number in %d in guesses", no_of_guesses);

    return 0;
}