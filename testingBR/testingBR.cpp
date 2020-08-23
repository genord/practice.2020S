#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
#include "prov.h"
#include <stdlib.h>
int h = 99, m = 99;

void check1(){
    if (h > 24 || h < 0) {
        printf("ERRORhr");
        exit(1);
    }
}

void check2(){
    if (m > 60 || m < 0) {
        printf("ERRORmin");
        exit(1);}}





int main(){


    setlocale(LC_ALL, "ru");
    printf("Ввежите время");
    printf("\nЧасы:");
    scanf_s("%2d", &h);  
    check1();
    if (m == 99) {
        printf("\n999999999999999");
    };
    scanf_s("%2d", &m);
    check2();
    hconvert(h);
    mconvert(m);
    return(0);

}