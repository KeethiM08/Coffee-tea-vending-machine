#include "select.h"

void displayActivity(int num_customers, int num_hot_coffees, int num_cold_coffees, int num_teas, int num_cookies) {
    printf("Displaying Daily Activities:\n");
    printf("---------------------------\n");
    printf("Number of Customers Served: %d\n", num_customers);
    printf("Number of Hot Coffees Sold: %d\n", num_hot_coffees);
    printf("Number of Cold Coffees Sold: %d\n", num_cold_coffees);
    printf("Number of Teas Sold: %d\n", num_teas);
    printf("Number of Cookies Sold: %d\n", num_cookies);
}
