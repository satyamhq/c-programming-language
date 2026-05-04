#include<stdio.h>

struct car{
    char *name;
    int seats;
    float price;
}; // end of structure

int main(){
    struct car mycar; // declare a variable of type struct car
    mycar.name = "BMW";
    mycar.seats = 5;
    mycar.price = 50000.0;
    printf("%s %d %f", mycar.name, mycar.seats, mycar.price);
    return 0;
}