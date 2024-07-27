#include "select.h"

float selectHotCoffee() {
    printf("\nTypes of Hot Coffee:\n");
    printf("1. Cappuccino coffee (Rs.70.00)\n");
    printf("2. Filter coffee (Rs.30.00)\n");
    printf("3. Latte coffee (Rs.85.00)\n");
    printf("4. Americano coffee (Rs.100.00)\n");
    printf("5. Cancel\n");
    int coffee_choice;
    printf("Enter your choice (1, 2, 3, 4 or 5): ");
    scanf("%d", &coffee_choice);

    switch (coffee_choice) {
        case 1:
            printf("You've selected Cappuccino coffee. Price: Rs.70.00\n");
            return 70.00;
        case 2:
            printf("You've selected Filter coffee. Price: Rs.30.00\n");
            return 30.00;
        case 3:
            printf("You've selected Latte coffee. Price: Rs.85.00\n");
            return 85.00;
        case 4:
            printf("You've selected Americano coffee. Price: Rs.100.00\n");
            return 100.00;
        case 5:
            printf("You've cancelled the selection.\n");
            return 0.0;
        default:
            printf("Invalid choice. Assuming no coffee.\n");
            return 0.0;
    }
}
