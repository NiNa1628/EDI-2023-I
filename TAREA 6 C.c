/* CUADRADO CON CUADROS MÁS PEQUEÑOS DENTRO CON 1 Y 0
1111111
1000001
1011101
1010101
1011101
1111111
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

    printf("Concentric square: \n\n");

    cleanMatrix(pattern);
    concentricSquare(pattern);
    printPattern(pattern);

    return 0;
}

void concentricSquare(int pattern[ARRAY_SIZE][ARRAY_SIZE]){
    int distance;
    for(distance = 0; distance < ARRAY_SIZE/2; distance += 2){
        genericSquare(pattern, distance);
    }
}

void genericSquare(int pattern[ARRAY_SIZE][ARRAY_SIZE], int distance){
    int i;
    for(i = distance; i < ARRAY_SIZE - distance; i++){
        pattern[distance][i] = 1;
        pattern[ARRAY_SIZE - distance - 1][i] = 1;
        pattern[i][distance] = 1;
        pattern[i][ARRAY_SIZE - distance - 1] = 1;
    }
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
