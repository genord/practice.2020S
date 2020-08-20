#include <stdio.h>
#include <clocale>
#include <stdlib.h>
#include "timelib.h"




int main()
{
    setlocale(LC_ALL, "ukr");
    printf("Введiть час");
    printf("\nГодин:");
    scanf_s("%d", &hours);

    check1();
    
    printf("Хвилинн:");
    scanf_s("%d", &minutes);
    check2();
    hoursconvert(hours);
    minutesconvert(minutes);
    check3();
    return(0);
}