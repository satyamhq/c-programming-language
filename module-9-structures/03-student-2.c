#include<stdio.h>
#include<string.h>

struct student{
    char name[50];   // fixed size array
    int reg;
    float cgpa;
};

int main(){
    struct student s1;

    printf("Enter name: \n");
    scanf("%s", s1.name);

    printf("Enter registration number: \n");
    scanf("%d", &s1.reg);

    printf("Enter CGPA: \n");
    scanf("%f", &s1.cgpa);

    printf("%s %d %.2f", s1.name, s1.reg, s1.cgpa);
    
    return 0;    
}