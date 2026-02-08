// TEMPERATURE CONVERSION PROGRAM
#include<stdio.h>
void main()
{
    float temperature_celsius;
    float temperature_fahrenheit;

    int choice;
    printf("Welcome to the Temperature Conversion Program!\n");
    printf("Choose the conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature_celsius);

        // Convert temperature from Celsius to Fahrenheit using the formula F = (C * 9/5) + 32
        temperature_fahrenheit = (temperature_celsius * 9 / 5) + 32;

        printf("Temperature in Fahrenheit: %.2f °F\n", temperature_fahrenheit);
    } else if (choice == 2) {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature_fahrenheit);

        // Convert temperature from Fahrenheit to Celsius using the formula C = (F - 32) * 5/9
        temperature_celsius = (temperature_fahrenheit - 32) * 5 / 9;

        printf("Temperature in Celsius: %.2f °C\n", temperature_celsius);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

}
