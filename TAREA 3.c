//González Medina Claudia Karina

#include <stdio.h>
#define SIZE 10
int pideN();
int pideSearch();

void pideArreglo(int array[SIZE], int n);
int valorCiclo(int array[SIZE], int n, int search);
int valorRecursivo(int array[SIZE], int n, int search);

int main()
{
    int laN;
    int search;
    int arreglo[SIZE]; //{4, 9, 3, 15, 93, 8, 11, 7, 14, 12}
    laN=pideN();
    search=pideSearch();
    pideArreglo(arreglo, laN);
    valorCiclo(arreglo, laN, search);
    int val;
    valorRecursivo(arreglo, laN, search);
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

int pideSearch()
{
    int search;
    printf("Give me a number of search: ");
    scanf("%d", &search);
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

int valorCiclo(int array[SIZE],int n, int search)
{
    int left=0, right=n, mean, band=0;
    do{
        mean=(left+right)/2;
        if(array[mean]==search)
            band=1;
        else
            if(search<array[mean])
            {
                right=mean-1;
                band=1;
            }
            else
            {
                left=mean+1;
                band=1;
            }
    }while(left<=right && band==0);
        printf("Results: %d\n", band);
}

int valorRecursivo(int array[SIZE], int n, int search)
{
    int left=0, right=n, mean, band=0;
    do{
        mean=(left+right)/2;
        if(array[mean]==search)
            band=1;
        else
        band=0;
            if(search<array[mean])
                band=valorRecursivo(n+1);
            else
                band=valorRecursivo(n-1);
     }while(left<=right && band==0);
    printf("Results: %d\n", band);
}
