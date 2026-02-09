#include <stdio.h>

int main() {
    float a, b, c;

    // Input CGPA
    printf("Enter CGPA of Student A: ");
    scanf("%f", &a);

    printf("Enter CGPA of Student B: ");
    scanf("%f", &b);

    printf("Enter CGPA of Student C: ");
    scanf("%f", &c);

    // Compare CGPA
    if (a >= b && a >= c) {
        printf("Student A has the highest CGPA: %.2f", a);
    } else if (b >= a && b >= c) {
        printf("Student B has the highest CGPA: %.2f", b);
    } else {
        printf("Student C has the highest CGPA: %.2f", c);
    }

    return 0;
}
