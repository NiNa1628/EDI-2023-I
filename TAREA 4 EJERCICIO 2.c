/*2. Escribe un programa que pida al usuario días, horas y minutos. Calcule la cantidad total de segundos y los imprima como en el ejemplo:
Si el usuario captura:
Días: 1
Horas: 4
Minutos: 35
El programa deberá imprimir:
1 día, 4 horas y 35 minutos son: 102900 segundos.*/
//Claudia Karina González Medina

#include <stdio.h>
int main()
{
    int day, hour, minutes, seconds;
    printf("Give me the days: ");
    scanf("%d", &day);
    printf("Give me the hours: ");
    scanf("%d", &hour);
    printf("Give me the minutes: ");
    scanf("%d", &minutes);
    seconds=(day*86400)+(hour*3600)+(minutes*60);
    printf("%d days, %d hours y %d minutes are: %d seconds\n", day, hour, minutes, seconds);
}
