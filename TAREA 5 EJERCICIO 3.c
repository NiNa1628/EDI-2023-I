/*Lea los valores de los lados de un triángulo.
Determine y muestre un mensaje correspondiente a su tipo (Equilátero, Isóceles o Escaleno)*/
//González Medina Claudia Karina

#include<stdio.h>
int main()
{
    float side1, side2, side3;
    printf("Give me a first side: ");
    scanf("%f", &side1);
    printf("Give me a second side: ");
    scanf("%f", &side2);
    printf("Give me a third side: ");
    scanf("%f", &side3);
    if(side1==side2)
        if(side1==side3)
        printf("Equilateral triangle");
    else
        printf("Isosceles triangle");
    else
        if(side2==side3)
        printf("Isosceles triangle");
    else
        if(side1==side3)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}
