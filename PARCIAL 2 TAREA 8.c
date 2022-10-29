//González Medina Claudia Karina
/*En un programa integre las funciones de todos los métodos de ordenación revisados este parcial:
  -Burbuja
  -Inserción
  -Selección
  -Quicksort
Realice un experimento para verificar el tiempo que se tarda en ordenar cada método de ordenación
un arreglo de enteros de diferentes tamaños (utilice la función time).
Solo debe contabilizar el tiempo del ordenamiento, no la creación del arreglo o la impresión.
Cree una tabla en donde indique el número de elementos a ordenar, y el tiempo que se tardó en cada método, utilizando:
  +un arreglo totalmente invertido
  +un arreglo ya ordenado
  +un arreglo aleatorio
Realice esta tabla para diferentes tamaños de arreglo.*/

#include <stdio.h>
#include <time.h>
# define SIZE 10

int pideN();
void pideArreglo(int array[SIZE], int n);
//BURBUJA
void bubble(int array[SIZE],int n);
//INSERTION
void insertionSort(int array[SIZE], int n);
//SELECCIÓN
void selectionSort(int array[SIZE], int n);
//QUICKSORT
void quicksort(int array[SIZE], int inf, int sup);
void printArray(int array[SIZE]);

int main()
{
    int laN;
    int arreglo[SIZE];
    int inicio, inf, sup, fin, tiempo;
    srand(230);
    laN=pideN();
    pideArreglo(arreglo, laN);
    inicio=clock();
    insertionSort(arreglo, laN);
    selectionSort(arreglo, laN);
    quicksort(arreglo, inf, sup);
    fin=clock();
    tiempo=fin-inicio;
    printArray(arreglo);
    printf("\n  Tiempo que se tarda en ordenar: %d milisegundos", tiempo);
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

//BURBUJA
void bubble(int array[SIZE],int n)
{
    int ref, remain, run, tmp;
    for(ref=n-1; ref<n-1; ref++)
    {
        remain=ref;
        for(run=ref+1; run<n; run++)
            {
                if(array[run]<array[remain])
                remain=run;
            tmp=array[ref];
            array[ref]=array[remain];
            array[remain]=tmp;
            }
    }
}

//INSERTION
void insertionSort(int array[SIZE], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

//SELECCIÓN
void selectionSort(int array[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (array[j] < array[min_idx])
            min_idx = j;
           if(min_idx != i)
            swap(&array[min_idx], &array[i]);
    }
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//QUICKSORT
 void quicksort(int array[SIZE], int inf, int sup)
 {
	int i;
	int j;
	int x;
	i=inf;
	j=sup;
	x=array[(i+j)/2];
	while(i<=j)
	{
		while(array[i]<x)
			i++;
		while(array[j]>x)
			j--;
		if(i<=j)
		{
			intercambio(array,i,j);
			i++;
			j--;
		}
	}
	if(inf<j)
		quicksort(array,inf,j);
	if(i<sup)
		quicksort(array,i,sup);
 }
void intercambio(int array[SIZE],int i, int j)
 {
	int aux;
	aux=array[i];
	array[i]=array[j];
	array[j]=aux;
 }

//IMPRIMIR
void printArray(int array[SIZE])
{
    int i;
    for (i=0; i < SIZE; i++)
        printf("%d ", array[i]);
    printf("\n");
}
