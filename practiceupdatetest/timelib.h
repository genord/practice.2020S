#pragma once
#include <locale>
int hours, minutes;



int hoursconvert(int hours)
{
    setlocale(LC_ALL, "ukr");
    {
        if (hours == 0)  printf("Ќуль годин");
        if (hours == 1)  printf("ќдна година");
        if (hours == 2)  printf("ƒвi години");
        if (hours == 3)  printf("“ри години");
        if (hours == 4)  printf("„отири години");
        if (hours == 5)  printf("ѕ'€ть годин");
        if (hours == 6)  printf("Ўiсть годин");
        if (hours == 7)  printf("—iм годин");
        if (hours == 8)  printf("¬iсiм годин");
        if (hours == 9)  printf("ƒев'€ть годин");
        if (hours == 10)  printf("ƒес€ть годин");
        if (hours == 11)  printf("ќдинадц€ть годин");
        if (hours == 12)  printf("ƒванадц€ть годин");
        if (hours == 13)  printf("“ринадц€ть годин");
        if (hours == 14)  printf("„отирнадц€ть годин");
        if (hours == 15)  printf("ѕ'€тнадц€ть годин");
        if (hours == 16)  printf("Ўiстнадц€ть годин");
        if (hours == 17)  printf("—iмнадц€ть годин");
        if (hours == 18)  printf("¬iсiмнадц€ть годин");
        if (hours == 19)  printf("ƒев'€тьнадц€ть годин");
        if (hours == 20)  printf("ƒвадц€ть годин");
        if (hours == 21)  printf("ƒвадц€ть одна година");
        if (hours == 22)  printf("ƒвадц€ть друга година");
        if (hours == 23)  printf("ƒвадц€ть трет€ година");
        if (hours == 24)  printf("ƒвадц€ть четверта година");
    }
    return 0;
}
int minutesconvert(int minutes)
{
    int A3, A4;
    A3 = ((minutes - (minutes % 10)) - (minutes - (minutes % 100))) / 10;
    A4 = minutes % 10;

    if (minutes >= 0 || minutes <= 19)
    {
        if (minutes == 0)  printf(" нуль хвилин");
        if (minutes == 1)  printf(" одна хвилина");
        if (minutes == 2)  printf(" двi хвилини");
        if (minutes == 3)  printf(" три хвилини");
        if (minutes == 4)  printf(" чотири хвилини");
        if (minutes == 5)  printf(" п'€ть хвилин");
        if (minutes == 6)  printf(" шiсть хвилин");
        if (minutes == 7)  printf(" сiм хвилин");
        if (minutes == 8)  printf(" вiсiм хвилин");
        if (minutes == 9)  printf(" дев'€ть хвилин");
        if (minutes == 10)  printf(" дес€ть хвилин");
        if (minutes == 11)  printf(" одинадц€ть хвилина");
        if (minutes == 12)  printf(" дванадц€ть хвилини");
        if (minutes == 13)  printf(" тринадц€ть хвилини");
        if (minutes == 14)  printf(" чотирнадц€ть хвилини");
        if (minutes == 15)  printf(" п'€тнадц€ть хвилин");
        if (minutes == 16)  printf(" шiстнадц€ть хвилин");
        if (minutes == 17)  printf(" сiмнадц€ть хвилин");
        if (minutes == 18)  printf(" вiсiмнадц€ть хвилин");
        if (minutes == 19)  printf(" дев'€тнадц€ть хвилин");
    }
    else if (minutes >= 20 || minutes <= 60)
    {
        if (A3 == 2)  printf(" двадц€ть");
        if (A3 == 3)  printf(" тридц€ть");
        if (A3 == 4)  printf(" сорок");
        if (A3 == 5)  printf(" п'€тдес€т");
        if (A4 == 1)  printf(" одна хвилина");
        if (A4 == 2)  printf(" двi хвилини");
        if (A4 == 3)  printf(" три хвилини");
        if (A4 == 4)  printf(" чотири хвилини");
        if (A4 == 5)  printf(" п'€ть хвилин");
        if (A4 == 6)  printf(" шiсть хвилин");
        if (A4 == 7)  printf(" сiм хвилин");
        if (A4 == 8)  printf(" вiсiм хвилин");
        if (A4 == 9)  printf(" дев'€ть хвилин");
    }
    else
    {
        printf("ERROR");
        _Exit(0);
    }
    return 0;
}

int check1()
{
    if (hours > 24 || hours < 0 || hours == NULL)
    {
        printf("ERROR");
        _Exit(0);
    }
}

int check2()
{
    if (minutes > 60 || minutes < 0 || minutes == NULL) {
        printf("ERROR");
        _Exit(0);
    }
}

int check3()
{
    if (hours < 0 || hours > 24 || minutes < 0 || minutes > 60)
    {
        return(1);
    }
}