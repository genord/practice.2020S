#include <stdio.h>
#include <clocale>
#include <stdlib.h>

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
int hoursconvert()
{
    if (hours == 0) { printf("Нуль годин"); }
    if (hours == 1) { printf("Одна година"); }
    if (hours == 2) { printf("Двi години"); }
    if (hours == 3) { printf("Три години"); }
    if (hours == 4) { printf("Чотири години"); }
    if (hours == 5) { printf("П'ять годин"); }
    if (hours == 6) { printf("Шiсть годин"); }
    if (hours == 7) { printf("Сiм годин"); }
    if (hours == 8) { printf("Вiсiм годин"); }
    if (hours == 9) { printf("Дев'ять годин"); }
    if (hours == 10) { printf("Десять годин"); }
    if (hours == 11) { printf("Одинадцять годин"); }
    if (hours == 12) { printf("Дванадцять годин"); }
    if (hours == 13) { printf("Тринадцять годин"); }
    if (hours == 14) { printf("Чотирнадцять годин"); }
    if (hours == 15) { printf("П'ятнадцять годин"); }
    if (hours == 16) { printf("Шiстнадцять годин"); }
    if (hours == 17) { printf("Сiмнадцять годин"); }
    if (hours == 18) { printf("Вiсiмнадцять годин"); }
    if (hours == 19) { printf("Дев'ятьнадцять годин"); }
    if (hours == 20) { printf("Двадцять годин"); }
    if (hours == 21) { printf("Двадцять одна година"); }
    if (hours == 22) { printf("Двадцять друга година"); }
    if (hours == 23) { printf("Двадцять третя година"); }
    if (hours == 24) { printf("Двадцять четверта година"); }
    return 0;
}
int minutesconvert()
{
    int A3;
    int A4;
    A3 = ((minutes - (minutes % 10)) - (minutes - (minutes % 100))) / 10;
    A4 = minutes % 10;
    printf("\nliva %d", A3);
    printf("\nprava %d\n", A4);

    if (minutes <= 19) {
        if (minutes == 0) { printf("Нуль хвилин"); }
        if (minutes == 1) { printf("Одна хвилина"); }
        if (minutes == 2) { printf("Двi хвилини"); }
        if (minutes == 3) { printf("Три хвилини"); }
        if (minutes == 4) { printf("Чотири хвилини"); }
        if (minutes == 5) { printf("П'ять хвилин"); }
        if (minutes == 6) { printf("Шiсть хвилин"); }
        if (minutes == 7) { printf("Сiм хвилин"); }
        if (minutes == 8) { printf("Вiсiм хвилин"); }
        if (minutes == 9) { printf("Дев'ять хвилин"); }
        if (minutes == 10) { printf("Десять хвилин"); }
        if (minutes == 11) { printf("Одинадцять хвилина"); }
        if (minutes == 12) { printf("Дванадцять хвилини"); }
        if (minutes == 13) { printf("Тринадцять хвилини"); }
        if (minutes == 14) { printf("Чотирнадцять хвилини"); }
        if (minutes == 15) { printf("П'ятнадцять хвилин"); }
        if (minutes == 16) { printf("Шiстнадцять хвилин"); }
        if (minutes == 17) { printf("Сiмнадцять хвилин"); }
        if (minutes == 18) { printf("Вiсiмнадцять хвилин"); }
        if (minutes == 19) { printf("Дев'ятнадцять хвилин"); }
    }
    if (minutes > 19) {
        if (A3 == 2) { printf("Двадцять"); }
        if (A3 == 3) { printf("Тридцять"); }
        if (A3 == 4) { printf("Сорок"); }
        if (A3 == 5) { printf("П'ятдесят"); }
        if (A4 == 1) { printf("одна хвилина"); }
        if (A4 == 2) { printf("двi хвилини"); }
        if (A4 == 3) { printf("три хвилини"); }
        if (A4 == 4) { printf("чотири хвилини"); }
        if (A4 == 5) { printf("п'ять хвилин"); }
        if (A4 == 6) { printf("шiсть хвилин"); }
        if (A4 == 7) { printf("сiм хвилин"); }
        if (A4 == 8) { printf("вiсiм хвилин"); }
        if (A4 == 9) { printf("дев'ять хвилин"); }
    }
    return 0;
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
    hoursconvert();
    minutesconvert();
}