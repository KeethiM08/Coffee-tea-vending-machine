#include "select.h"

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
