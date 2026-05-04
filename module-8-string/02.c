#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from the user

    printf("You entered: %s", str); // Print the entered string

    return 0;
}