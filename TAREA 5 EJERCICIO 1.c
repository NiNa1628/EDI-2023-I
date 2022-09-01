/*Escriba un programa en C que solicite al usuario una hora (hora y minutos) y lo salude siguiendo estas condiciones:
        a. Si la hora está entre las 0:00 y las 11:59 saludará con Buenos Días
        b. Entre las 12:00 y las 17:59 saludará con Buenas Tardes
        c. Entre las 18:00 y las 23:59 saludará con Buenas Noches
        d. Cualquier otra opción dirá que la hora no es válida*/
//González Medina Claudia Karina

#include<stdio.h>
int main()
{
    int hour, minute;
    printf("Give me a hour: ");
    scanf("%d", &hour);
    printf("Give me a minutes: ");
    scanf("%d", &minute);
    if(hour>=0 && hour<=11 && minute<=59)
     printf("Good morning");
     else
          if(hour>=12 && hour<=17 && minute<=59)
        printf("Good afternoon");
        else
            if(hour>=18 && hour<=23 && minute<=59)
                    printf("Good night");
                    else
                        printf("Hour no valid");
}
