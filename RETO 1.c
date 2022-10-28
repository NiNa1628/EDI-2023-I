//González Medina Claudia Karina
/*1. Dado un arreglo ordenado de enteros diferentes y un valor objetivo, el indice de la posición en donde
debería insertarse el valor objetivo, de forma que estuviera ordenado en el arreglo.
Ejemplo 1:
Entrada: nums = [1, 3, 5, 6], objetivo = 5 Salida: 2
Ejemplo 2:
Entrada: nums = [1, 3, 5, 6], objetivo = 2 Salida: 1
Ejemplo 3:
Entrada: letras = [1, 3, 5, 6], objetivo = 7 Salida: 4*/

int searchObj(int n, int arr[], int objetivo);

int main()
{
    int arr[] = {1, 3, 5, 6};
    int objetivo, respuesta;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Give me number of search: ");
    scanf("%d", &objetivo);
    respuesta=searchObj(n, arr, objetivo);
    printf("Salida: %d\n", respuesta);
    return 0;
}


int searchObj(int n, int arr[], int objetivo)
{
    int respuesta, i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==objetivo)
        {
            respuesta=i;
            return respuesta;
        }
        else
            if(arr[i]>objetivo)
            {
                respuesta=i;
                return respuesta;
            }
    }
    return n;
}
