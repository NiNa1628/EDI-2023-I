/*Una frutería ofrece las manzanas con descuento según la siguiente tabla:
0–2 = 0%
2.01–5 = 10%
5.01–10 = 15%
10.01 en adelante = 20%
Dado el precio por kilo, y el peso, determinar cuánto pagará una persona que compre manzanas es esa frutería.*/
//González Medina Claudia Karina

#include<stdio.h>
int main()
{
    float kilo, price, cost;
    printf("Give me a number of kilos: ");
    scanf("%f", &kilo);
    printf("Gvie me the price: ");
    scanf("%f", &price);
    if(kilo>=0 && kilo<=2)
        cost=kilo*price;
    else
        if(kilo>=2.01 && kilo<=5)
        cost=kilo*(price-price*.1);
    else
        if(kilo>=5.01 && kilo<=10)
        cost=kilo*(price-price*.15);
    else
        if(kilo>=10.01)
        cost=kilo*(price-price*.2);
    printf("The cost for the purchase is: %.2f\n", cost);
}
