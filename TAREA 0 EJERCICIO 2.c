//González Medina Claudia Karina
/*2.Dados un arreglo de N números,  realice una función que ordene el arreglo
de forma descendente, utilizando el algoritmo de su preferencia. (Donde 0 <N <=100)*/

#include <stdio.h>
#define SIZE 100

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

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }


}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[SIZE];
    int n;
    n=pideN();
    pideArreglo(arr, n);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
