/*Escriba un programa que pida el precio de un producto (puede tener decimales)
y el porcentaje de descuento. Calcule el precio del producto con el descuento
y lo imprima con 2 decimales. Por ejemplo:
Si el usuario captura el precio de 99.99 y el 25 por ciento de descuento,
el programa debe de decir que el precio con descuento es: 74.99.*/
//Claudia Karina González Medina

#include <stdio.h>
int main()
{
    int percent;
    float price, perPrice;
    printf("you give me the price of the product? ");
    scanf("%f", &price);
    printf("you give me the percent of discount the product(in base 100)? ");
    scanf("%d", &percent);
    perPrice=price-(price*percent/100);
    printf("The price of the product with discount is: %.2f\n", perPrice);
}

