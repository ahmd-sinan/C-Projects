#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char pass[50];
    printf("Enter your password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    // If password is empty
    int length = strlen(pass);
    if (length == 0) {
        printf("Password cannot be empty!\n");
        return 1;
    }

    int foundLower = 0;
    int foundUpper = 0;
    int foundDigit = 0;
    int foundSpecial = 0;
    int foundCommon = 0;

    // Check for character types and common passwords
    for (int i = 0; pass[i] != '\0'; i++) {
        if (islower(pass[i])) foundLower = 1;
        else if (isupper(pass[i])) foundUpper = 1;
        else if (isdigit(pass[i])) foundDigit = 1;
        else if (!isalnum(pass[i])) foundSpecial = 1;
    }
    if (strcmp(pass, "qwerty") == 0 || strcmp(pass, "abcd") == 0 || strcmp(pass, "password") == 0 ||
        strcmp(pass, "admin") == 0 || strcmp(pass, "aaaa") == 0 ||strcmp(pass, "1111") == 0 || strcmp(pass, "1234") == 0) {
            foundCommon = 1;
        }

    // Scoring the password
    int score = 0;
    if (length >= 8) score++;
    if (length >= 12) score++;
    if (foundLower) score++;
    if (foundUpper) score++;
    if (foundDigit) score++;
    if (foundSpecial) score++;
    if (foundCommon) score -= 2;

    // Output the results
    printf("Password: %s\n", pass);
    if (score <= 2) printf("WEAK!!\n");
    else if (score == 3 || score == 4) printf("MEDIUM!\n");
    else if (score >= 5) printf("STRONG!\n");
    printf("\n");
    return 0;
}
