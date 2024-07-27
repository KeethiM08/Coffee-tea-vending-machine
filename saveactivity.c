#include "select.h"

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
