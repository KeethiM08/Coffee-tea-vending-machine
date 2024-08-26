#include "select.h"
#include "hotcoffee.c"
#include "coldcoffee.c"
#include "tea.c"
#include "cookie.c"
#include "saveactivity.c"
#include "displayactivity.c"
#include "loadactivity.c"
#include "password.c"

int main() {
    int choice;
    float total_bill = 0;
    float cookie_price;
    int num_cookies = 0;
    int num_hot_coffees = 0;
    int num_cold_coffees = 0;
    int num_teas = 0;
    int num_customers = 0;
    loadActivity(&num_customers, &num_hot_coffees, &num_cold_coffees, &num_teas, &num_cookies);

    printf("Welcome to the Coffee or Tea Vending Machine!\n");

    char activity_choice;
    printf("press A to see the daily activity (only owner) \n");
    printf("press T order ");
    scanf(" %c", &activity_choice);

    if (activity_choice == 'a' || activity_choice == 'A') {
        if (checkPassword()) {
            displayActivity(num_customers, num_hot_coffees, num_cold_coffees, num_teas, num_cookies);
        } else {
            printf("Access denied.\n");
            return 0; // Exit the program if access is denied
        }
    } else if (activity_choice == 't' || activity_choice == 'T') {
        while (1) {
            printf("\n1. Hot Coffee\n2. Cold Coffee\n3. Tea\n4. Cancel\n");
            printf("Enter your choice (1, 2, 3, or 4): ");
            if (scanf("%d", &choice) != 1) {
                printf("Invalid input. Please enter a number.\n");
                while(getchar() != '\n');  // Clear the input buffer
                continue;
            }

            if (choice == 4) {
                printf("You've cancelled the selection. Exiting...\n");
                break;
            }

            num_customers++;

            float price = 0.0;
            switch (choice) {
                case 1:
                    price = selectHotCoffee();
                    if (price == 0.0) continue;
                    total_bill += price;
                    num_hot_coffees++;
                    break;
                case 2:
                    price = selectColdCoffee();
                    if (price == 0.0) continue;
                    total_bill += price;
                    num_cold_coffees++;
                    break;
                case 3:
                    price = selectTea();
                    if (price == 0.0) continue;
                    total_bill += price;
                    num_teas++;
                    break;
                default:
                    printf("Invalid choice. Please enter 1 for Hot Coffee, 2 for Cold Coffee, 3 for Tea, or 4 to Cancel.\n");
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

       
        printf("Your total bill is: Rs.%.2f\n", total_bill);

        char post_summary_choice;
        printf("Please pay the bill (p/P)  ");
        scanf(" %c", &post_summary_choice);

        if (post_summary_choice == 'p' || post_summary_choice == 'P') {
            printf("Thank you for your payment! Have a nice day!\n");
        }  
           else {
            printf("Invalid choice.\n");
        }

        saveActivity(num_customers, num_hot_coffees, num_cold_coffees, num_teas, num_cookies);
    } else {
        printf("Invalid choice. Exiting...\n");
    }

    return 0;
}
