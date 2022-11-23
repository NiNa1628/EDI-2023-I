//Claudia Karina Gonz�lez Medina

#include <stdio.h>
#define STACK_CAPACITY 10

typedef struct
{
  int pila[STACK_CAPACITY];
  int tope;
  int tam;
}Stack;

void setupStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);


int push(Stack *s, int value);
int pop(Stack *s, int *value);


int main(void) {
  Stack stack;
  int r;
  setupStack(&stack);
  r=push(&stack, 1);
  r=push(&stack, 2);
  r=push(&stack, 3);
  r=push(&stack, 4);
  r=push(&stack, 5);
  r=push(&stack, 6);
  r=push(&stack, 7);
  r=push(&stack, 8);
  r=push(&stack, 9);
  r=push(&stack, 10);
  r=push(&stack, 11);
  int push(Stack *s,int value);
  int pop(Stack *s, int *value);
  return 0;
}

void setupStack(Stack *s)
{
  s->tope= -1;
  s->tam= 0;
}

int isStackEmpty(Stack s)
{
  if(s.tope == -1)
    return 1;
  return 0;
}

int isStackFull(Stack s)
{
  if(s.tope == STACK_CAPACITY-1)
    return 1;
  return 0;
}

//Inserta valores dentro de la pila
int push(Stack *s,int value)
{//1. Preguntar si la pila no est� llena
  if(isStackFull(*s) == 0) // !isStackFull(*s)
  {// puedo insertar porque no est� llena
    s->tope++;
    s->pila[s->tope] = value;
    s->tam++;
    return 1;
  }
  printf("Error: pila llena");
  return 0;
}

int pop(Stack *s, int *value)
{
  if (isStackEmpty(*s) != 0)
  {
    s->tope--;
    return s->pila[s->tope] = value;
    printf("Dato eliminado: %d",value);
  }

  printf("Error: pila vac�a");
  return -1;
}
