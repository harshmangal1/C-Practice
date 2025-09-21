// NUMBER GUESSING GAME
/* We will write a program that generates a random number and asks the player to guess
   it. if the player's guess is higher than the actual number, the program displays "Lower
   numberf please". Similarly, if the user's guess is too low, the program prints "Higher
   number  please".
   
   When the user guesses the correct number, the program displays the number of guesses 
   the player used to arrive at the number.
   
   HINT: Use loop & use a random number generator.*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // Initialize random number generator
    srand(time(0));

    // Generator random number between 1 and 100
    int randomNumber = (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed;

    // print the random number
    // printf("Random Number: %d\n", randomNumber);
    
    do{
        printf("Guess the number ");
        scanf("%d",&guessed);
        if(guessed>randomNumber){
            printf("Lower number please!\n");
        }else{
            printf("Higher number please!\n");
        }
        no_of_guesses++;

    } while (guessed!=randomNumber);
    
    printf("You guessed the number in %d guesses",no_of_guesses);

    return 0;
}