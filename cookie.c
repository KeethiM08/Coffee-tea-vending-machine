#include "select.h"

float selectCookie() {
    char cookies_choice;
    printf("\nWould you like to add cookies? (y/n): ");
    scanf(" %c", &cookies_choice);
    if (cookies_choice == 'y' || cookies_choice == 'Y') {
        printf("\nTypes of Cookies:\n");
        printf("1. Chocolate Chip Cookie for one pack (Rs.40.00)\n");
        printf("2. Oatmeal Raisin Cookie for one pack (Rs.45.00)\n");
        printf("3. Peanut Butter Cookie for one pack (Rs.58.00)\n");
        printf("4. Cancel\n");
        int cookie_choice;
        printf("Enter your choice (1, 2, 3 or 4): ");
        scanf("%d", &cookie_choice);

        switch (cookie_choice) {
            case 1:
                printf("You've selected Chocolate Chip Cookie. Price: Rs.40.00\n");
                return 40.00;
            case 2:
                printf("You've selected Oatmeal Raisin Cookie. Price: Rs.45.00\n");
                return 45.00;
            case 3:
                printf("You've selected Peanut Butter Cookie. Price: Rs.58.00\n");
                return 58.00;
            case 4:
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
