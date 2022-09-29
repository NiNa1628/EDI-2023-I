/*
El programa imprimirá:

Producto con mayor precio: 99

Producto con menos stock: 33

Total de venta esperada: 134.49
*/
#include <stdio.h>
#define NR 10
#define NC 10

int main()
{
    float tienda[NR][NC];
    int n, cr, cc, men=100, mayor, menor;
    float suma=0, may=0;

    do{
    printf("No. of fact: ");
    scanf("%d", &n);
    }while(n<1||n>NR);

    for(cr=1; cr<=n; cr++)
        for(cc=1; cc<=3; cc++)
        {
            printf("Dame el dato[%d, %d]= ", cr, cc);
            scanf("%f", &tienda[cr][cc]);
        }

        {for(cr=1; cr<=n; cr++)
        {
            if(tienda[cr][2]>=may)
            {
                may=tienda[cr][2];
            }
            mayor=tienda[cr][1];}
            printf("Producto con mayor precio: %d\n", mayor);

        }


        {for(cr=1; cr<=n; cr++)
        {
            if(tienda[cr][3]<men)
            {
                men=tienda[cr][3];
            }
                menor=tienda[2][1];
        }
                printf("Producto con menos stock: %d\n", menor);
        }



        for(cr=1; cr<=n; cr++)
        {

            suma+=tienda[cr][2]*tienda[cr][3];
        }
        printf("Total de venta esperada: %.2f\n", suma);
}
