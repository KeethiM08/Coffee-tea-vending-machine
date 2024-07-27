#include "select.h"

int checkPassword() {
    const char correct_password[] = "admin123"; // Set your password here
    char input_password[50];

    printf("Enter the password to access daily activities: ");
    scanf("%s", input_password);

    return strcmp(input_password, correct_password) == 0;
}
