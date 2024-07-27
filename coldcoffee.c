#include "select.h"

float selectColdCoffee() {
    printf("\nTypes of Cold Coffee:\n");
    printf("1. Chocolate cream cold Coffee (Rs.310.00)\n");
    printf("2. Iced coffee (Rs.70.00)\n");
    printf("3. Frappuccino (Rs.290.00)\n");
    printf("4. Iced Mocha (Rs.340.00)\n");
    printf("5. Cancel\n");
    int cold_coffee_choice;
    printf("Enter your choice (1, 2, 3, 4, or 5): ");
    scanf("%d", &cold_coffee_choice);

    switch (cold_coffee_choice) {
        case 1:
            printf("You've selected Chocolate cream cold Coffee. Price: Rs.310.00\n");
            return 310.00;
        case 2:
            printf("You've selected Iced coffee. Price: Rs.70.00\n");
            return 70.00;
        case 3:
            printf("You've selected Frappuccino. Price: Rs.290.00\n");
            return 290.00;
        case 4:
            printf("You've selected Iced Mocha. Price: Rs.340.00\n");
            return 340.00;
        case 5:
            printf("You've cancelled the selection.\n");
            return 0.0;
        default:
            printf("Invalid choice. Assuming no cold coffee.\n");
            return 0.0;
    }
}
