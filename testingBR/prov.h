#pragma once
#include <locale>

int hconvert(int h) {
    setlocale(LC_ALL, "ukr"); {
        if (h == 0)  printf("Ќуль годин");
        if (h == 1)  printf("ќдна година");
        if (h == 2)  printf("ƒвi години");
        if (h == 3)  printf("“ри години");
        if (h == 4)  printf("„отири години");
        if (h == 5)  printf("ѕ'€ть годин");
        if (h == 6)  printf("Ўiсть годин");
        if (h == 7)  printf("—iм годин");
        if (h == 8)  printf("¬iсiм годин");
        if (h == 9)  printf("ƒев'€ть годин");
        if (h == 10)  printf("ƒес€ть годин");
        if (h == 11)  printf("ќдинадц€ть годин");
        if (h == 12)  printf("ƒванадц€ть годин");
        if (h == 13)  printf("“ринадц€ть годин");
        if (h == 14)  printf("„отирнадц€ть годин");
        if (h == 15)  printf("ѕ'€тнадц€ть годин");
        if (h == 16)  printf("Ўiстнадц€ть годин");
        if (h == 17)  printf("—iмнадц€ть годин");
        if (h == 18)  printf("¬iсiмнадц€ть годин");
        if (h == 19)  printf("ƒев'€тьнадц€ть годин");
        if (h == 20)  printf("ƒвадц€ть годин");
        if (h == 21)  printf("ƒвадц€ть одна година");
        if (h == 22)  printf("ƒвадц€ть друга година");
        if (h == 23)  printf("ƒвадц€ть трет€ година");
        if (h == 24)  printf("ƒвадц€ть четверта година"); }
    return 0;
}



int mconvert(int m)
{
    int A3, A4;
    A3 = ((m - (m % 10)) - (m - (m % 100))) / 10;
    A4 = m % 10;

    if (m >= 0 || m <= 19)
    {
        if (m == 0)  printf(" нуль хвилин");
        if (m == 1)  printf(" одна хвилина");
        if (m == 2)  printf(" двi хвилини");
        if (m == 3)  printf(" три хвилини");
        if (m == 4)  printf(" чотири хвилини");
        if (m == 5)  printf(" п'€ть хвилин");
        if (m == 6)  printf(" шiсть хвилин");
        if (m == 7)  printf(" сiм хвилин");
        if (m == 8)  printf(" вiсiм хвилин");
        if (m == 9)  printf(" дев'€ть хвилин");
        if (m == 10)  printf(" дес€ть хвилин");
        if (m == 11)  printf(" одинадц€ть хвилина");
        if (m == 12)  printf(" дванадц€ть хвилини");
        if (m == 13)  printf(" тринадц€ть хвилини");
        if (m == 14)  printf(" чотирнадц€ть хвилини");
        if (m == 15)  printf(" п'€тнадц€ть хвилин");
        if (m == 16)  printf(" шiстнадц€ть хвилин");
        if (m == 17)  printf(" сiмнадц€ть хвилин");
        if (m == 18)  printf(" вiсiмнадц€ть хвилин");
        if (m == 19)  printf(" дев'€тнадц€ть хвилин");
    }
    else if (m >= 20 || m <= 60)
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
        exit(1);
    }
    return 0;
}