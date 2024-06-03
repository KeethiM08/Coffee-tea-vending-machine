#include "select.h"
#include "hotcoffee.c"
#include "coldcoffee.c"
#include "tea.c"
#include "cookie.c"

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
