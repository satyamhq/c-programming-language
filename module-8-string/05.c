#include<stdio.h>
#include<string.h>

int main() {
    char org_str[50];

    printf("Enter a string: ");
    fgets(org_str, sizeof(org_str), stdin);

    // Remove newline
    org_str[strcspn(org_str, "\n")] = '\0';

    for(int i = 0; org_str[i] != '\0'; i++) {
        int c = 1;

        // Skip already counted characters
        if(org_str[i] == '0') continue;

        for(int j = i + 1; org_str[j] != '\0'; j++) {
            if(org_str[i] == org_str[j]) {
                c++;
                org_str[j] = '0'; // mark counted
            }
        }

        printf("%c = %d\n", org_str[i], c);
    }

    return 0;
}