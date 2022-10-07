//González Medina Claudia Karina

#include <stdio.h>
#define SIZE 10
int pideN();
void pideArreglo(int array[SIZE], int n);
int valorCiclo(int array[SIZE], int n);
int valorRecursivo(int array[SIZE], int n, int value);

int main()
{
    int laN;
    int arreglo[SIZE]; //{4, 9, 3, 15, 93, 8, 11, 7, 14, 12}
    laN=pideN();
    pideArreglo(arreglo, laN);
    valorCiclo(arreglo, laN);
    int val;
    valorRecursivo(arreglo, laN, val);
}

int pideN()
{
    int n;
    do{
    printf("No. of fact: ");
    scanf("%d", &n);
    }while(n<1||n>SIZE);
    return(n);
}

void pideArreglo(int array[SIZE], int n)
{
    int cont;
    for(cont = 0; cont<=n; cont++)
    {
        printf("Give me a number of fact %d: ", cont);
        scanf("%d", &array[cont]);
    }
}

int valorCiclo(int array[SIZE],int n)
{
    int cont, value, band=0;
    printf("Give me a value: ");
    scanf("%d", & value);
    for(cont=0; cont<n; cont++)
    if(array[cont]==value)
        band=1;
    else
        band=0;
    printf("\n");
    printf("Results in cycle: %d\n", band);
}

int valorRecursivo(int array[SIZE], int n, int value)
{
    int cont=0, band=0;
    if(array[cont]==value)
        band=1;
    else
        band=0;
    band=valorRecursivo(n-1);
    printf("Results in Recursive: %d\n", band);
}
