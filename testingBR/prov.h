#pragma once
#include <locale>

int hconvert(int h) {
     
    switch (h) {
    case (0):  printf("Ќуль годин"); break;
    case (1):  printf("ќдна година"); break;
    case (2):  printf("ƒвi години"); break;
    case (3):  printf("“ри години"); break;
    case (4):  printf("„отири години"); break;
    case (5):  printf("ѕ'€ть годин"); break;
    case (6):  printf("Ўiсть годин"); break;
    case (7):  printf("—iм годин"); break;
    case (8):  printf("¬iсiм годин"); break;
    case (9):  printf("ƒев'€ть годин"); break;
    case (10):  printf("ƒес€ть годин"); break;
    case (11):  printf("ќдинадц€ть годин"); break;
    case (12):  printf("ƒванадц€ть годин"); break;
    case (13):  printf("“ринадц€ть годин"); break;
    case (14):  printf("„отирнадц€ть годин"); break;
    case (15):  printf("ѕ'€тнадц€ть годин"); break;
    case (16):  printf("Ўiстнадц€ть годин"); break;
    case (17):  printf("—iмнадц€ть годин"); break;
    case (18):  printf("¬iсiмнадц€ть годин"); break;
    case (19):  printf("ƒев'€тьнадц€ть годин"); break;
    case (20):  printf("ƒвадц€ть годин"); break;
    case (21):  printf("ƒвадц€ть одна година"); break;
    case (22):  printf("ƒвадц€ть друга година"); break;
    case (23):  printf("ƒвадц€ть трет€ година"); break;
    case (24):  printf("ƒвадц€ть четверта година"); break;
    default:;
    }
    return 11;
}



int mconvert(int m)
{
    int A3, A4;
    A3 = ((m - (m % 10)) - (m - (m % 100))) / 10;
    A4 = m % 10;

    if (m >= 0 || m <= 19)
    {
        switch (m) {
        case (0): printf(" нуль хвилин"); break;
        case (1): printf(" одна хвилина"); break;
        case (2): printf(" двi хвилини"); break;
        case (3): printf(" три хвилини"); break;
        case (4): printf(" чотири хвилини"); break;
        case (5): printf(" п'€ть хвилин"); break;
        case (6): printf(" шiсть хвилин"); break;
        case (7): printf(" сiм хвилин"); break;
        case (8): printf(" вiсiм хвилин"); break;
        case (9): printf(" дев'€ть хвилин"); break;
        case (10): printf(" дес€ть хвилин"); break;
        case (11): printf(" одинадц€ть хвилина"); break;
        case (12): printf(" дванадц€ть хвилини"); break;
        case (13): printf(" тринадц€ть хвилини"); break;
        case (14): printf(" чотирнадц€ть хвилини"); break;
        case (15): printf(" п'€тнадц€ть хвилин"); break;
        case (16): printf(" шiстнадц€ть хвилин"); break;
        case (17): printf(" сiмнадц€ть хвилин"); break;
        case (18): printf(" вiсiмнадц€ть хвилин"); break;
        case (19): printf(" дев'€тнадц€ть хвилин"); break;
        default:; return 0;
        }
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