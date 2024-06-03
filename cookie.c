#include "select.h"
float selectCookie() {
    char cookies_choice;
    float cookie_price = 0.0;
    printf("\nWould you like to add cookies? (y/n): ");
    scanf(" %c", &cookies_choice);
    if (cookies_choice == 'y' || cookies_choice == 'Y') {
        printf("\nTypes of Cookies:\n");
        printf("1. Chocolate Chip Cookie (Rs.10.00)\n");
        printf("2. Oatmeal Raisin Cookie (Rs.25.50)\n");
        printf("3. Peanut Butter Cookie (Rs.18.50)\n");
        printf("4. Sugar Cookie (Rs.15.00)\n");
        printf("5. Cancel\n");
        int cookie_choice;
        printf("Enter your choice (1, 2, 3, 4, or 5): ");
        scanf("%d", &cookie_choice);

        switch (cookie_choice) {
            case 1:
                printf("You've selected Chocolate Chip Cookie. Price: Rs.10.00\n");
                return 10.00;
            case 2:
                printf("You've selected Oatmeal Raisin Cookie. Price: Rs.25.50\n");
                return 25.50;
            case 3:
                printf("You've selected Peanut Butter Cookie. Price: Rs.18.50\n");
                return 18.50;
            case 4:
                printf("You've selected Sugar Cookie. Price: Rs.15.00\n");
                return 15.00;
            case 5:
                printf("You've cancelled the selection.\n");
                return 0.0;
            default:
                printf("Invalid choice. Assuming no cookies.\n");
                return 0.0;
        }
    } else if (cookies_choice != 'n' && cookies_choice != 'N') {
        printf("Invalid choice. Assuming no cookies.\n");
    }

    return 0.0;
}
