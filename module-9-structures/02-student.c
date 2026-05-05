#include<stdio.h>
#include<string.h>

struct student{
    char *name;
    int reg;
    float cgpa;
};

int main(){
    struct student s1;

    s1.name = "Satyam";
    s1.reg = 125057000;
    s1.cgpa = 8.00;

    printf("%s %d %.2f", s1.name, s1.reg, s1.cgpa);
    
    return 0;    
}