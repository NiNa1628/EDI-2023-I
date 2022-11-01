//González Medina Claudia Karina
/*1.1.Definir una estructura que guarde los datos de cada canción:
•Código de la canción (numérico)
•Nombre de la canción
•Nombre del albúm
•Número de interpretes
•Nombre del/de los interpretes (1 a 3 máximo)
•Número de reproducciones*/

#include <stdio.h>
#define SIZE 5

struct CANCION
{
    int codCancion;
    char nomCancion[50];
    char nomAlbum[50];
    int numInterpretes;
    char nomInter1[50];
    char nomInter2[50];
    char nomInter3[50];
    int numReproducciones;
};

void leeCancion(struct CANCION *n);
void leerArreglo(struct CANCION canciones[]);
int mayorReproducciones(struct CANCION canciones[]);


//1.2.Realice una función que reciba como parámetro una canción y capture todos susdatos
void leeCancion(struct CANCION *n)
{
      fflush(stdin);
      printf("Dame el Código de la canción (numérico): ");
      scanf("%d", &n->codCancion);
      fflush(stdin);
      printf("Dame el Nombre de la canción: ");
      scanf("%[^\n]", n->nomCancion);
      fflush(stdin);
      printf("Dame el Nombre del albúm: ");
      scanf("%[^\n]", n->nomAlbum);
      fflush(stdin);
      printf("Dame el Número de interpretes: ");
      scanf("%d", &n->numInterpretes);
      fflush(stdin);
      if(n->numInterpretes==1)
      {
          printf("Dame el nombre del interprete 1: ");
          scanf("%[^\n]", n->nomInter1);
          fflush(stdin);
      }
      else
        if(n->numInterpretes==2)
        {
            printf("Dame el nombre del interprete 1: " );
            scanf("%[^\n]", n->nomInter1);
            fflush(stdin);
            printf("Dame el nombre del interprete 2: " );
            scanf("%[^\n]", n->nomInter2);
            fflush(stdin);
        }
        else
            if(n->numInterpretes==3)
            {
                printf("Dame el nombre del interprete 1:" );
                scanf("%[^\n]", n->nomInter1);
                fflush(stdin);
                printf("Dame el nombre del interprete 2:" );
                scanf("%[^\n]", n->nomInter2);
                fflush(stdin);
                printf("Dame el nombre del interprete 3:" );
                scanf("%[^\n]", n->nomInter3);
                fflush(stdin);
            }
            fflush(stdin);
            printf("Dame el Número de reproducciones: ");
      scanf("%d", &n->numReproducciones);
}


/*1.3.Realice una función que reciba como parámetro un arreglo de canciones y capture todas las canciones
(haciendo uso de la función anterior)que el usuario necesite (máximo 100)*/
void leerArreglo(struct CANCION canciones[SIZE])
{
    int cont;
    for(cont=0; cont<SIZE; cont++)
    {
        leeCancion(&canciones[cont]);
    }
}


/*1.4.Realice una función que reciba como parámetro un arreglo de canciones ya capturadas y regrese la
posición en el arreglo en donde se encuentra la canción con más reproducciones.*/
int mayorReproducciones(struct CANCION canciones[])
{
    int cont, mayor=0;
    for(cont=0; cont<SIZE; cont++)
    {
        if(canciones[cont].numReproducciones>canciones[mayor].numReproducciones)
            mayor=cont;
    }
    return(mayor);
}


/*1.5.Escriba la función main de su programa, en donde:
•Declare un arreglo de canciones de 100 elementos
•Llamea la función que captura los elementos del arreglo
•Llame a la función que busca la canción con mas reproducciones
•Imprima la canción con mayor número de reproducciones*/

int main()
{
    int mayor;
    struct CANCION canciones[100];
    leerArreglo(canciones);
    mayor=mayorReproducciones(canciones);
    printf("La canción más reproducida en Spotify es: %s", canciones[mayor].nomCancion);
}

