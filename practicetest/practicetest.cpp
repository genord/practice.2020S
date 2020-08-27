#include <stdio.h>
#include <clocale>
#include <stdlib.h>
#include "timefunct.h"

int hours, minutes;

void check1()
{
    int res;
    do {
        res = scanf_s("%d", &hours);
        while (getchar() != '\n');
        if (res == 1) {}
        else
        {
            printf("ERROR");
            _Exit(0);
        };
    } while (res != 1);
    if (hours > 24 || hours < 0)
    {
        printf("ERROR");
        _Exit(0);
    }

}



void check2()
{
    int res;
    do {
        res = scanf_s("%d", &minutes);
        while (getchar() != '\n');
        if (res == 1) {}
        else
        {
            printf("ERROR");
            _Exit(0);
        };
    } while (res != 1);
    if (minutes > 60 || minutes < 0)
    {
        printf("ERROR");
        _Exit(0);
    }

}

int main()
{
    setlocale(LC_ALL, "ukr");
    printf("Введiть час");
    printf("\nГодин:");
    check1();
    printf("Хвилинн:");
    check2();
    hoursconvert(hours);
    minutesconvert(minutes);
    return(0);
}