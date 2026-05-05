#include<stdio.h>

struct student{
    char *name;
    int reg;
    float cgpa;
};

int main(){
    struct student college;

    college.name = "Satyam";
    college.reg = 125057000;
    college.cgpa = 8.00;

    printf("%s %d %f", college.name, college.reg, college.cgpa);
    
    return 0;    
}