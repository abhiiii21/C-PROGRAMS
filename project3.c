// WEIGHT CONVERSION PROJECT
#include<stdio.h>
void main()
{
    float weight_kg;
    float weight_lb;

    int choice;
    printf("Welcome to the Weight Conversion Program!\n");
    printf("Choose the conversion type:\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        // Kilograms to Pounds
        printf("Enter weight in kilograms: ");
        scanf("%f", &weight_kg);

        // Convert weight from kilograms to pounds using the conversion factor 1 kg = 2.20462 lbs
        weight_lb = weight_kg * 2.20462;

        printf("Weight in pounds: %.2f lbs\n", weight_lb);
    } else if (choice == 2) {
        // Pounds to Kilograms
        printf("Enter weight in pounds: ");
        scanf("%f", &weight_lb);

        // Convert weight from pounds to kilograms using the conversion factor 1 lb = 0.453592 kg
        weight_kg = weight_lb * 0.453592;

        printf("Weight in kilograms: %.2f kg\n", weight_kg);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

}
