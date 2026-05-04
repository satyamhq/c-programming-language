#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the size of string: ");
    scanf("%d", &n);
    char *my_str = (char *)malloc(n * sizeof(char)); // Dynamically allocate memory for the string
    printf("Enter a string: ");
    scanf("%s", my_str); // Read a string from the user
    printf("output = %s", my_str);
    free(my_str); // Free the dynamically allocated memory
    return 0;
}