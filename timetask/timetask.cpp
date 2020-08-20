#include <stdio.h>
#include <clocale>
#include <stdlib.h>
#include "timefunction.h"

int hours, minutes;

int check1()
{
    if (hours > 24 || hours < 0) {
        printf("ERROR");
        _Exit(0);
    }
}

int check2()
{
    if (minutes > 60 || minutes < 0) {
        printf("ERROR");
        _Exit(0);
    }
}

int main()
{
    setlocale(LC_ALL, "ukr");
    printf("Введiть час");
    printf("\nГодин:");
    scanf_s("%d", &hours);
    printf("Хвилинн:");
    scanf_s("%d", &minutes);
    check1();
    check2();
    hoursconvert(hours);
    minutesconvert(minutes);
}