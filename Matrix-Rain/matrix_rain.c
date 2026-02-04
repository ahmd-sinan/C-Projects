#include <stdio.h>
#include <stdlib.h> // For rand(), srand()
#include <time.h>   // For time()
#include <unistd.h> // For usleep() 

int main(void) {
    srand(time(0)); // Seed the random generator

    // ANSI color code for bold green text
    printf("\033[1;32m"); 

    printf("LOADING MATRIX....\n");
    sleep(1); // Wait 1 second before starting


    while (1) {
        
        for (int i = 0; i < 100; i++) { // 100 is the width of my terminal
            
            // We want mostly spaces (gaps) and fewer characters (drops)
            // Generate a number between 0 and 9.
            int probability = rand() % 10;

            if (probability > 7) { // 20% Chance (9 - 7 = 2): print a matrix character
                 
                // ASCII 33 (!) to 126 (~) includes numbers and symbols
                char random_char = (rand() % (126 - 33 + 1)) + 33;
                printf("%c ", random_char);
            } else {
                // 80% Chance (10 - 2 = 8) to print empty space
                printf("  ");
            }
        }

        // create new line if printed one line (100 characters)
        printf("\n");

        // usleep takes microseconds, 50000 = 50 milliseconds
        // Change this number to make rain faster or slower!
        usleep(50000); 
    }
    printf("\033[0m"); // Reset text color (This line will never be reached)

    return 0;
}


