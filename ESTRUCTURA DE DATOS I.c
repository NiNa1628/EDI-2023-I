#include <stdio.h>
int main()
{
    int cant1, cant2, suma, impar;
    impar=1;
    suma=0;
    printf("dame una cantidad: ");
    scanf("%d", &cant1);
    printf("dame otra cantidad: ");
    scanf("%d", &cant2);
    if(impar>=cant1)
    {
        while(impar<cant2)
        {
            impar=impar+2;
            suma=suma+impar;
            printf("%d", impar);
            printf("+");
        }
    }
    printf("= %d", suma-cant2);
}
