#include "select.h"

float selectTea() {
    printf("\nTypes of Tea:\n");
    printf("1. Green Tea (Rs.25.00)\n");
    printf("2. Black Tea (Rs.45.00)\n");
    printf("3. Ginger Tea (Rs.20.00)\n");
    printf("4. Masala Tea (Rs.30.00)\n");
    printf("5. Cancel\n");
    int tea_choice;
    printf("Enter your choice (1, 2, 3, 4 or 5): ");
    scanf("%d", &tea_choice);

    switch (tea_choice) {
        case 1:
            printf("You've selected Green Tea. Price: Rs.25.00\n");
            return 25.00;
        case 2:
            printf("You've selected Black Tea. Price: Rs.45.00\n");
            return 45.00;
        case 3:
            printf("You've selected Ginger Tea. Price: Rs.20.00\n");
            return 20.00;
        case 4:
            printf("You've selected Masala Tea. Price: Rs.30.00\n");
            return 30.00;
        case 5:
            printf("You've cancelled the selection.\n");
            return 0.0;
        default:
            printf("Invalid choice. Assuming no tea.\n");
            return 0.0;
    }
}
