#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Kelvin
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}


int main() {
    int choice;
    float temp, result;

    printf(" Temperature Converter \n");
    printf("1. Celsius --> Fahrenheit\n");
    printf("2. Fahrenheit --> Celsius\n");
    printf("3. Celsius --> Kelvin\n");
    printf("4. Kelvin --> Celsius\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsiusToFahrenheit(temp);
            printf("Result: %.2f °F\n", result);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = fahrenheitToCelsius(temp);
            printf("Result: %.2f °C\n", result);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsiusToKelvin(temp);
            printf("Result: %.2f K\n", result);
            break;

        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            result = kelvinToCelsius(temp);
            printf("Result: %.2f °C\n", result);
            break;

        default:
            printf("Invalid choice! Please select 1-4.\n");
    }

    return 0;
}
