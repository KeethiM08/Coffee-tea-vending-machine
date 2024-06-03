#include <stdio.h>
float selectCookie() {
    char cookies_choice;
    float cookie_price = 0.0;
    printf("\nWould you like to add cookies? (y/n): ");
    scanf(" %c", &cookies_choice);
    if (cookies_choice == 'y' || cookies_choice == 'Y') {
        printf("\nTypes of Cookies:\n");
        printf("1.Chocolate Chip Cookie (Rs.10.00)\n");
        printf("2.Oatmeal Raisin Cookie (Rs.25.50)\n");
        printf("3.Peanut Butter Cookie (Rs.18.50)\n");
        printf("4.Sugar Cookie (Rs.15.00)\n");
        int cookie_choice;
        printf("Enter your choice (1, 2, 3, or 4): ");
        scanf("%d", &cookie_choice);

        switch (cookie_choice) {
            case 1:
                cookie_price = 10.00;
                printf("You've selected Chocolate Chip Cookie. Price: Rs.10.00\n");
                break;
            case 2:
                cookie_price = 25.50;
                printf("You've selected Oatmeal Raisin Cookie. Price: Rs.25.50\n");
                break;
            case 3:
                cookie_price = 18.50;
                printf("You've selected Peanut Butter Cookie. Price: Rs.18.50\n");
                break;
            case 4:
                cookie_price = 15.00;
                printf("You've selected Sugar Cookie. Price: Rs.15.00\n");
                break;
            default:
                printf("Invalid choice. Assuming no cookies.\n");
        }
    } else if (cookies_choice != 'n' && cookies_choice != 'N') {
        printf("Invalid choice. Assuming no cookies.\n");
    }

    return cookie_price;
}

int main() {
    int choice;
    float total_bill = 0;
    float cookie_price;
    int num_cookies=0;
    int num_coffee = 0;
    int num_coffee1 = 0;
    int num_tea = 0;

    printf("Welcome to the Coffee or Tea Vending Machine!\n");
    printf("1. Hot Coffee\n2. Cold Coffee\n3.Tea\n");

    do {
        printf("\nEnter your choice (1,2 or 3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nTypes of Hot Coffee:\n");
                printf("1. Cappuccino coffee (Rs.230.00)\n");
                printf("2. Filter coffee (Rs.55.50)\n");
                printf("3. Latte coffee (Rs.280.40)\n");
                printf("4. Americano coffee (Rs.300.75)\n");
                int coffee_choice;
                printf("Enter your choice (1,2,3 or 4): ");
                scanf("%d", &coffee_choice);
                switch (coffee_choice) {
                    case 1:
                        total_bill += 230.00;
                        printf("You've selected Cappuccino coffee. Price: Rs.230.00\n");
                        break;
                    case 2:
                        total_bill += 55.50;
                        printf("You've selected Filter coffee. Price: Rs.55.50\n");
                        break;
                    case 3:
                        total_bill += 280.40;
                        printf("You've selected Latte coffee Price: Rs.280.40\n");
                        break;
                    case 4:
                        total_bill += 300.75;
                        printf("You've selected Americano coffee. Price: Rs.300.75\n");
                        break;
                    default:
                        printf("Invalid choice. Assuming no coffee.\n");
                }
                num_coffee++;
                break;
            case 2:
                printf("\nTypes of Cold Coffee:\n");
                printf("1.chocolate cream cold Coffee (Rs.268.00)\n");
                printf("2.Iced coffee (Rs.320.50)\n");
                printf("3. Frappuccino (Rs.290.00)\n");
                printf("4. Iced Mocha  (Rs.300.50)\n");
                int cold_coffee_choice;
                printf("Enter your choice (1,2,3 or 4): ");
                scanf("%d", &cold_coffee_choice);
                switch (cold_coffee_choice) {
                    case 1:
                        total_bill += 268.0;
                        printf("You've selected chocolate cream cold Coffee. Price: Rs.268.00\n");
                        break;
                    case 2:
                        total_bill += 320.50;
                        printf("You've selected Iced coffee. Price: Rs.320.50\n");
                        break;
                    case 3:
                        total_bill += 290.0;
                        printf("You've selected Frappuccino. Price: Rs.290.00\n");
                        break;
                    case 4:
                        total_bill += 300.50;
                        printf("You've selected Mocha Frappe. Price: Rs.300.50\n");
                        break;
                    default:
                        printf("Invalid choice. Assuming no cold coffee.\n");
                }
                num_coffee1++;
                break;
            case 3:
                printf("\nTypes of  Tea:\n");
                printf("1. Green Tea (Rs.25.00)\n");
                printf("2. Black Tea (Rs.45.75)\n");
                printf("3. Ginger Tea (Rs.20.25)\n");
                printf("4. Masala Tea (Rs.30.50)\n");
                int tea_choice;
                printf("Enter your choice (1,2,3 or 4): ");
                scanf("%d", &tea_choice);
                switch (tea_choice) {
                    case 1:
                        total_bill += 25.0;
                        printf("You've selected Green Tea. Price: Rs.25.00\n");
                        break;
                    case 2:
                        total_bill += 45.75;
                        printf("You've selected Black Tea. Price: Rs.45.75\n");
                        break;
                    case 3:
                        total_bill += 20.25;
                        printf("You've selected ginger Tea. Price: Rs.20.25\n");
                        break;
                    case 4:
                        total_bill += 30.50;
                        printf("You've selected Masala Tea. Price: Rs.30.50\n");
                        break;
                    default:
                        printf("Invalid choice. Assuming no tea.\n");
                }
                num_tea++;
                break;
            default:
                printf("Invalid choice. Please enter 1 for Hot Coffee, 2 for Cold Coffee, 3 for  Tea.\n");
        }
    float cookie_price=selectCookie();
        total_bill += cookie_price;
        if(cookie_price>0){
            num_cookies++;
        }

        char continue_choice;
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_choice);

        if (continue_choice == 'n' || continue_choice == 'N') {
            break;
        }

    } while (1);

    printf("\nYour order summary:\n");
    printf("Number of Hot Coffees: %d\n", num_coffee);
    printf("Number of cold Coffees: %d\n", num_coffee1);
    printf("Number of Teas: %d\n", num_tea);
    printf("Number of Cookies: %d\n", num_cookies);
    printf("Your total bill is: Rs.%.2f\n", total_bill);
    printf("Thank you for using our service!\n");

    return 0;
}
