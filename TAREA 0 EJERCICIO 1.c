//Gonz�lez Medina Claudia Karina
/*1.1.Definir una estructura que guarde los datos de cada canci�n:
�C�digo de la canci�n (num�rico)
�Nombre de la canci�n
�Nombre del alb�m
�N�mero de interpretes
�Nombre del/de los interpretes (1 a 3 m�ximo)
�N�mero de reproducciones*/

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


//1.2.Realice una funci�n que reciba como par�metro una canci�n y capture todos susdatos
void leeCancion(struct CANCION *n)
{
      fflush(stdin);
      printf("Dame el C�digo de la canci�n (num�rico): ");
      scanf("%d", &n->codCancion);
      fflush(stdin);
      printf("Dame el Nombre de la canci�n: ");
      scanf("%[^\n]", n->nomCancion);
      fflush(stdin);
      printf("Dame el Nombre del alb�m: ");
      scanf("%[^\n]", n->nomAlbum);
      fflush(stdin);
      printf("Dame el N�mero de interpretes: ");
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
            printf("Dame el N�mero de reproducciones: ");
      scanf("%d", &n->numReproducciones);
}


/*1.3.Realice una funci�n que reciba como par�metro un arreglo de canciones y capture todas las canciones
(haciendo uso de la funci�n anterior)que el usuario necesite (m�ximo 100)*/
void leerArreglo(struct CANCION canciones[SIZE])
{
    int cont;
    for(cont=0; cont<SIZE; cont++)
    {
        leeCancion(&canciones[cont]);
    }
}


/*1.4.Realice una funci�n que reciba como par�metro un arreglo de canciones ya capturadas y regrese la
posici�n en el arreglo en donde se encuentra la canci�n con m�s reproducciones.*/
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


/*1.5.Escriba la funci�n main de su programa, en donde:
�Declare un arreglo de canciones de 100 elementos
�Llamea la funci�n que captura los elementos del arreglo
�Llame a la funci�n que busca la canci�n con mas reproducciones
�Imprima la canci�n con mayor n�mero de reproducciones*/

int main()
{
    int mayor;
    struct CANCION canciones[100];
    leerArreglo(canciones);
    mayor=mayorReproducciones(canciones);
    printf("La canci�n m�s reproducida en Spotify es: %s", canciones[mayor].nomCancion);
}

