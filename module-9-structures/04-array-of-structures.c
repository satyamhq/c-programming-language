#include<stdio.h>
#include<string.h>

struct student{
    char name[20];   // fixed size array
    int reg;
    float cgpa;
};

int main(){
    struct student s1[3];
    for(int i = 0; i < 3; i++){
        printf("Enter name: \n");
        scanf("%s", s1[i].name);

        printf("Enter registration number: \n");
        scanf("%d", &s1[i].reg);

        printf("Enter CGPA: \n");
        scanf("%f", &s1[i].cgpa);
    }

    for(int i = 0; i < 3; i++){
        printf("%s %d %.2f\n", s1[i].name, s1[i].reg, s1[i].cgpa);
    }
    return 0;
}