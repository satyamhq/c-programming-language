/*
 * Program 05: Memory Size of Data Types
 * Description: Demonstrates the sizeof operator to find memory
 *              occupied by different data types in C.
 * 
 * Concepts Covered:
 * - sizeof operator
 * - All basic data types
 * - Memory allocation understanding
 * - %zu format specifier for size_t
 */

#include <stdio.h>

int main() {
    // Declaring variables of different types
    char ch = 'A';
    short s = 100;
    int i = 1000;
    long l = 100000L;
    long long ll = 1000000000LL;
    float f = 3.14f;
    double d = 3.14159265359;
    long double ld = 3.14159265358979323846L;
    
    printf("╔══════════════════════════════════════════════════╗\n");
    printf("║     MEMORY SIZE OF DATA TYPES IN C               ║\n");
    printf("╠══════════════════════════════════════════════════╣\n");
    printf("║  Data Type        │  Size (bytes)  │  Value      ║\n");
    printf("╠═══════════════════╪════════════════╪═════════════╣\n");
    printf("║  char             │       %zu        │     %c       ║\n", sizeof(ch), ch);
    printf("║  short            │       %zu        │    %d     ║\n", sizeof(s), s);
    printf("║  int              │       %zu        │   %d     ║\n", sizeof(i), i);
    printf("║  long             │       %zu        │  %ld   ║\n", sizeof(l), l);
    printf("║  long long        │       %zu        │ %lld ║\n", sizeof(ll), ll);
    printf("║  float            │       %zu        │   %.2f    ║\n", sizeof(f), f);
    printf("║  double           │       %zu        │   %.2lf    ║\n", sizeof(d), d);
    printf("║  long double      │      %zu        │   %.2Lf    ║\n", sizeof(ld), ld);
    printf("╚══════════════════════════════════════════════════╝\n");
    
    printf("\n===== Additional Information =====\n");
    printf("Size of pointer: %zu bytes\n", sizeof(int*));
    printf("Size of array[10]: %zu bytes\n", sizeof(int[10]));
    
    return 0;
}
