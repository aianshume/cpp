/*
date: 19/8/2022
contians all code for let us c books with all examples and excersices of chapter 1
*/
#include <stdio.h>

int simpleIntrest(){
    // function to return simple intrest page:29
    int p,n;
    float r,si;
    // p = 1000;
    // n = 3;
    // r = 8.5;
    printf("Enter value of p,n,r");
    scanf("%d %d %f", &p, &n, &r);

    // formula for simple intrest
    si = p * n * r / 100;

    printf("%f", si);
    return 0;
}

/*
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. 
*/
void kmTocm(){
    float km;
    printf("enter the km distance between two cities");
    scanf("%f", &km);

    printf("meter: %f \n", km*1000);
    printf("feet: %f \n", km*3280.84);
    printf("inches: %f \n", km*39370.1);
    printf("centimetter: %f \n", km*100000);
}

int main() {
    // simpleIntrest();
    kmTocm();
    return 0;
}