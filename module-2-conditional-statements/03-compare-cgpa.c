/*
 * Program 03: Compare CGPA of Three Students
 * Description: Find the student with highest CGPA among three students.
 *              Demonstrates if-else-if ladder for multiple conditions.
 * 
 * Concepts Covered:
 * - if-else-if ladder
 * - Logical AND operator (&&)
 * - Comparison operators (>=)
 * - Float data type
 * - Multiple condition checking
 */

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
        printf("Student A has the highest CGPA: %.2f\n", a);
    } else if (b >= a && b >= c) {
        printf("Student B has the highest CGPA: %.2f\n", b);
    } else {
        printf("Student C has the highest CGPA: %.2f\n", c);
    }

    return 0;
}
