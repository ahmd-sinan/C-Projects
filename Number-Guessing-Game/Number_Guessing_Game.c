#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main(void) {
    srand(time(0)); // Initialize the Random Seed, We use the current time because it changes every second. This ensures the number is different every time you run it.
    int secret_number = (rand() % 100) + 1; // Generate the Secret Number (between 1 - 100), rand() % 100 gives 0-99. We add 1 to make it 1-100.
    
    int guess;
    int attempts = 0;

    printf("======= NUMBER GUESSING GAME =======\n");
    printf("Can you guess a number (between 1 - 100)?\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }
        attempts++;

        if(guess > secret_number) {
            printf("Too High!\n\n");
        }
        else if(guess < secret_number) {
            printf("Too Low!\n\n");
        }
    }
    while (guess != secret_number);
    printf("SUCCESS! You found the number %d in %d attempts.\n", secret_number, attempts);

    return 0;
}
