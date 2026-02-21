// SHOPPING CART PROJECT
#include<stdio.h>
void main()
{
    float price_milk=2.50;
    float price_bread=1.79;
    float price_butter=2.55;
    float price_eggs=4.00;
    float price_apples=5.50;
    int item_quantity=0;
    float total_amount=0.0;
    int item_number;
    int a;

    printf("Welcome to the Shopping Cart!\n");
    printf("Available items:\n");
    printf("1. Milk - $%4.2f\n", price_milk);
    printf("2. Bread - $%4.2f\n", price_bread);  
    printf("3. Butter - $%4.2f\n", price_butter);
    printf("4. Eggs - $%4.2f\n", price_eggs);
    printf("5. Apples - $%4.2f\n", price_apples);


do
{
    printf("Enter item number (1-5): ");
    scanf("%d", &item_number);

    switch(item_number)
    {
        case 1:
            printf("Enter quantity for Milk(Litre): ");
            scanf("%d", &item_quantity);
            total_amount += price_milk * item_quantity;
            break;
        case 2:
            printf("Enter quantity for Bread: ");
            scanf("%d", &item_quantity);
            total_amount += price_bread * item_quantity;
            break;
        case 3:
            printf("Enter quantity for Butter: ");
            scanf("%d", &item_quantity);
            total_amount += price_butter * item_quantity;
            break;
        case 4:
            printf("Enter quantity for Eggs: ");
            scanf("%d", &item_quantity);
            total_amount += price_eggs * item_quantity;
            break;
        case 5:
            printf("Enter quantity for Apples: ");
            scanf("%d", &item_quantity);
            total_amount += price_apples * item_quantity;
            break;
        default:
            printf("Invalid item number.\n");
    }
    printf("add more items? (1 for yes, 0 for no): ");
    scanf("%d", &a);
    } while (a == 1);

    printf("Total amount: $%.2f\n", total_amount);
    getchar();
    
}
