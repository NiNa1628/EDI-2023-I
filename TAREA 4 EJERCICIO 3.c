/*3. Escribe un programa que pida al usuario la cantidad de segundos e imprima el número de días, horas, minutos y segundos que son:
Por ejemplo:
Segundos: 765925
El programa deberá imprimir:
Días: 8
Horas: 20
Minutos: 45
Segundos: 25*/
//Claudia Karina González Medina

#include <stdio.h>
int main()
{
    int second, day, hour, minute, sd, sh, sm;
    printf("Give me amount of seconds: ");
    scanf("%d", &second);
    day=second/86400;
    sd=second-(day*86400);
    hour=sd/3600;
    sh=sd-(hour*3600);
    minute=sh/60;
    sm=sh-(minute*60);
    printf("Days: %d\n", day);
    printf("Horas: %d\n", hour);
    printf("Minutes: %d\n", minute);
    printf("Seconds: %d\n", sm);
}
