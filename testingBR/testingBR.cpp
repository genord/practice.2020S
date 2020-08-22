#include <stdio.h>
#include <clocale>
#include <stdlib.h>
#include "prov.h"
#define global const char  h, m;


void check1()
{
    if (h > 24 || h < 0) {
        printf("ERRORhr");
        exit(1);
    }
}

int check2()
{
    if (m > 60 || m < 0) {
        printf("ERRORmin");
        exit(1);
    }
}





int main()
{

    setlocale(LC_ALL, "ukr");
    printf("Введiть час");
    printf("\nГодин:");
    //scanf_s("%d", &h);  
    check1();
    printf("Хвилинн:");
    // scanf_s("%d", &m);
    check2();
    hconvert(h);
    mconvert(m);
    return(0);
}