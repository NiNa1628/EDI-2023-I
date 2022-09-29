/* CUADRADO CON 1 Y 0
11111
10001
10001
10001
11111
González Medina Claudia Karina*/
#include <stdio.h>

#define ARRAY_SIZE 10

void squarePattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]);
void cleanMatrix (int pattern[ARRAY_SIZE][ARRAY_SIZE]);
void printPattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]);
void genericSquare(int pattern[ARRAY_SIZE][ARRAY_SIZE], int distance);
void concentricSquare (int pattern[ARRAY_SIZE][ARRAY_SIZE]);

int main(){

    int pattern[ARRAY_SIZE][ARRAY_SIZE];

    printf("Give me a square pattern: \n\n");

    cleanMatrix(pattern);
    squarePattern(pattern);
    printPattern(pattern);

    return 0;
}

void squarePattern(int pattern[ARRAY_SIZE][ARRAY_SIZE])
{
    int i;
    for(i = 0; i < ARRAY_SIZE; i++){
    pattern[0][i] = 1;
    pattern[ARRAY_SIZE - 1][i] = 1;
    pattern[i][0] = 1;
    pattern[i][ARRAY_SIZE-1] = 1;
    }
}

void cleanMatrix(int pattern[ARRAY_SIZE][ARRAY_SIZE]){
    int r, c;

    for(r = 0; r < ARRAY_SIZE; r++){
        for(c = 0; c < ARRAY_SIZE; c++){
            pattern[r][c] = 0;
        }
    }
}

void printPattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]) {
    int r, c;

    for(r = 0; r < ARRAY_SIZE; r++) {
        for(c = 0; c < ARRAY_SIZE; c++) {
            printf("%d ", pattern[r][c]);
        }
        printf("\n");
    }
}
