#include <stdio.h>

float selectHotCoffee() {
    printf("\nTypes of Hot Coffee:\n");
    printf("1. Cappuccino coffee (Rs.230.00)\n");
    printf("2. Filter coffee (Rs.55.50)\n");
    printf("3. Latte coffee (Rs.280.40)\n");
    printf("4. Americano coffee (Rs.300.75)\n");
    printf("5. Cancel\n");
    int coffee_choice;
    printf("Enter your choice (1, 2, 3, 4, or 5): ");
    scanf("%d", &coffee_choice);

    switch (coffee_choice) {
        case 1:
            printf("You've selected Cappuccino coffee. Price: Rs.230.00\n");
            return 230.00;
        case 2:
            printf("You've selected Filter coffee. Price: Rs.55.50\n");
            return 55.50;
        case 3:
            printf("You've selected Latte coffee. Price: Rs.280.40\n");
            return 280.40;
        case 4:
            printf("You've selected Americano coffee. Price: Rs.300.75\n");
            return 300.75;
        case 5:
            printf("You've cancelled the selection.\n");
            return -1.0;
        default:
            printf("Invalid choice. Assuming no coffee.\n");
            return -1.0;
    }
}

float selectColdCoffee() {
    printf("\nTypes of Cold Coffee:\n");
    printf("1. Chocolate cream cold Coffee (Rs.268.00)\n");
    printf("2. Iced coffee (Rs.320.50)\n");
    printf("3. Frappuccino (Rs.290.00)\n");
    printf("4. Iced Mocha (Rs.300.50)\n");
    printf("5. Cancel\n");
    int cold_coffee_choice;
    printf("Enter your choice (1, 2, 3, 4, or 5): ");
    scanf("%d", &cold_coffee_choice);

    switch (cold_coffee_choice) {
        case 1:
            printf("You've selected Chocolate cream cold Coffee. Price: Rs.268.00\n");
            return 268.00;
        case 2:
            printf("You've selected Iced coffee. Price: Rs.320.50\n");
            return 320.50;
        case 3:
            printf("You've selected Frappuccino. Price: Rs.290.00\n");
            return 290.00;
        case 4:
            printf("You've selected Iced Mocha. Price: Rs.300.50\n");
            return 300.50;
        case 5:
            printf("You've cancelled the selection.\n");
            return -1.0;
        default:
            printf("Invalid choice. Assuming no cold coffee.\n");
            return -1.0;
    }
}

float selectTea() {
    printf("\nTypes of Tea:\n");
    printf("1. Green Tea (Rs.25.00)\n");
    printf("2. Black Tea (Rs.45.75)\n");
    printf("3. Ginger Tea (Rs.20.25)\n");
    printf("4. Masala Tea (Rs.30.50)\n");
    printf("5. Cancel\n");
    int tea_choice;
    printf("Enter your choice (1, 2, 3, 4, or 5): ");
    scanf("%d", &tea_choice);

    switch (tea_choice) {
        case 1:
            printf("You've selected Green Tea. Price: Rs.25.00\n");
            return 25.00;
        case 2:
            printf("You've selected Black Tea. Price: Rs.45.75\n");
            return 45.75;
        case 3:
            printf("You've selected Ginger Tea. Price: Rs.20.25\n");
            return 20.25;
        case 4:
            printf("You've selected Masala Tea. Price: Rs.30.50\n");
            return 30.50;
        case 5:
            printf("You've cancelled the selection.\n");
            return -1.0;
        default:
            printf("Invalid choice. Assuming no tea.\n");
            return -1.0;
    }
}

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

int main() {
    int choice;
    float total_bill = 0;
    float cookie_price;
    int num_cookies = 0;
    int num_hot_coffees = 0;
    int num_cold_coffees = 0;
    int num_teas = 0;

    printf("Welcome to the Coffee or Tea Vending Machine!\n");

    while (1) {
        printf("\n1. Hot Coffee\n2. Cold Coffee\n3. Tea\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &choice);

        float price = 0.0;
        switch (choice) {
            case 1:
                price = selectHotCoffee();
                if (price == -1.0) continue;  // Restart from the beginning if cancelled
                total_bill += price;
                num_hot_coffees++;
                break;
            case 2:
                price = selectColdCoffee();
                if (price == -1.0) continue;  // Restart from the beginning if cancelled
                total_bill += price;
                num_cold_coffees++;
                break;
            case 3:
                price = selectTea();
                if (price == -1.0) continue;  // Restart from the beginning if cancelled
                total_bill += price;
                num_teas++;
                break;
            default:
                printf("Invalid choice. Please enter 1 for Hot Coffee, 2 for Cold Coffee, or 3 for Tea.\n");
                continue;
        }

        cookie_price = selectCookie();
        total_bill += cookie_price;
        if (cookie_price > 0) {
            num_cookies++;
        }

        char continue_choice;
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_choice);

        if (continue_choice == 'n' || continue_choice == 'N') {
            break;
        }
    }

    printf("\nYour order summary:\n");
    printf("Number of Hot Coffees: %d\n", num_hot_coffees);
    printf("Number of Cold Coffees: %d\n", num_cold_coffees);
    printf("Number of Teas: %d\n", num_teas);
    printf("Number of Cookies: %d\n", num_cookies);
    printf("Your total bill is: Rs.%.2f\n", total_bill);
    printf("Thank you for using our service!\n");

    return 0;
}
