#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float selectHotCoffee();
float selectColdCoffee();
float selectTea();
float selectCookie();
void saveActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies);
void loadActivity(int *num_customers, int *num_hot_coffees, int *num_cold_coffees, int *num_teas, int *num_cookies);
void displayActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies);
int checkPassword();

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

void saveActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies) {
    FILE *file = fopen("daily_activity.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fprintf(file, "Daily Activity Report\n");
    fprintf(file, "---------------------\n");
    fprintf(file, "Number of Customers Served: %d\n", num_customers);
    fprintf(file, "Number of Hot Coffees Sold: %d\n", num_hot_coffees);
    fprintf(file, "Number of Cold Coffees Sold: %d\n", num_cold_coffees);
    fprintf(file, "Number of Teas Sold: %d\n", num_teas);
    fprintf(file, "Number of Cookies Sold: %d\n", num_cookies);
    fclose(file);
    printf("Activity saved successfully.\n");
}

void displayActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies) {
    printf("Displaying Daily Activities:\n");
    printf("---------------------------\n");
    printf("Number of Customers Served: %d\n", num_customers);
    printf("Number of Hot Coffees Sold: %d\n", num_hot_coffees);
    printf("Number of Cold Coffees Sold: %d\n", num_cold_coffees);
    printf("Number of Teas Sold: %d\n", num_teas);
    printf("Number of Cookies Sold: %d\n", num_cookies);
}

int checkPassword() {
    const char correct_password[] = "admin123"; // Set your password here
    char input_password[50];

    printf("Enter the password to access daily activities: ");
    scanf("%s", input_password);

    return strcmp(input_password, correct_password) == 0;
}

void loadActivity(int *num_customers, int *num_hot_coffees, int *num_cold_coffees, int *num_teas, int *num_cookies) {
    FILE *file = fopen("daily_activity.txt", "r");
    if (file == NULL) {
        printf("No previous activity found. Starting fresh.\n");
        *num_customers = 0;
        *num_hot_coffees = 0;
        *num_cold_coffees = 0;
        *num_teas = 0;
        *num_cookies = 0;
        return;
    }
    char buffer[256];
    fgets(buffer, sizeof(buffer), file); // Skip the first line
    fgets(buffer, sizeof(buffer), file); // Skip the second line

    fscanf(file, "Number of Customers Served: %d\n", num_customers);
    fscanf(file, "Number of Hot Coffees Sold: %d\n", num_hot_coffees);
    fscanf(file, "Number of Cold Coffees Sold: %d\n", num_cold_coffees);
    fscanf(file, "Number of Teas Sold: %d\n", num_teas);
    fscanf(file, "Number of Cookies Sold: %d\n", num_cookies);

    fclose(file);
}

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

        printf("\nYour order summary:\n");
        printf("Number of Hot Coffees: %d\n", num_hot_coffees);
        printf("Number of Cold Coffees: %d\n", num_cold_coffees);
        printf("Number of Teas: %d\n", num_teas);
        printf("Number of Cookies: %d\n", num_cookies);
        printf("Your total bill is: Rs.%.2f\n", total_bill);

        char post_summary_choice;
        printf("Would you like to pay the bill (p) or view daily activities (a)? ");
        scanf(" %c", &post_summary_choice);

        if (post_summary_choice == 'p' || post_summary_choice == 'P') {
            printf("Thank you for your payment! Have a nice day!\n");
        } else if (post_summary_choice == 'a' || post_summary_choice == 'A') {
            if (checkPassword()) {
                displayActivity(num_customers, num_hot_coffees, num_cold_coffees, num_teas, num_cookies);
            } else {
                printf("Access denied.\n");
            }
        } else {
            printf("Invalid choice.\n");
        }

        saveActivity(num_customers, num_hot_coffees, num_cold_coffees, num_teas, num_cookies);
    } else {
        printf("Invalid choice. Exiting...\n");
    }

    return 0;
}
