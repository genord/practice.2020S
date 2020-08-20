#pragma once

int hoursconvert(int hours)
{
    if (hours == 0) { printf("Ќуль годин"); }
    if (hours == 1) { printf("ќдна година"); }
    if (hours == 2) { printf("ƒвi години"); }
    if (hours == 3) { printf("“ри години"); }
    if (hours == 4) { printf("„отири години"); }
    if (hours == 5) { printf("ѕ'€ть годин"); }
    if (hours == 6) { printf("Ўiсть годин"); }
    if (hours == 7) { printf("—iм годин"); }
    if (hours == 8) { printf("¬iсiм годин"); }
    if (hours == 9) { printf("ƒев'€ть годин"); }
    if (hours == 10) { printf("ƒес€ть годин"); }
    if (hours == 11) { printf("ќдинадц€ть годин"); }
    if (hours == 12) { printf("ƒванадц€ть годин"); }
    if (hours == 13) { printf("“ринадц€ть годин"); }
    if (hours == 14) { printf("„отирнадц€ть годин"); }
    if (hours == 15) { printf("ѕ'€тнадц€ть годин"); }
    if (hours == 16) { printf("Ўiстнадц€ть годин"); }
    if (hours == 17) { printf("—iмнадц€ть годин"); }
    if (hours == 18) { printf("¬iсiмнадц€ть годин"); }
    if (hours == 19) { printf("ƒев'€тьнадц€ть годин"); }
    if (hours == 20) { printf("ƒвадц€ть годин"); }
    if (hours == 21) { printf("ƒвадц€ть одна година"); }
    if (hours == 22) { printf("ƒвадц€ть друга година"); }
    if (hours == 23) { printf("ƒвадц€ть трет€ година"); }
    if (hours == 24) { printf("ƒвадц€ть четверта година"); }
    return 0;
}
int minutesconvert(int minutes)
{
    int A3;
    int A4;
    A3 = ((minutes - (minutes % 10)) - (minutes - (minutes % 100))) / 10;
    A4 = minutes % 10;
    printf("\nliva %d", A3);
    printf("\nprava %d\n", A4);

    if (minutes <= 19) {
        if (minutes == 0) { printf("Ќуль хвилин"); }
        if (minutes == 1) { printf("ќдна хвилина"); }
        if (minutes == 2) { printf("ƒвi хвилини"); }
        if (minutes == 3) { printf("“ри хвилини"); }
        if (minutes == 4) { printf("„отири хвилини"); }
        if (minutes == 5) { printf("ѕ'€ть хвилин"); }
        if (minutes == 6) { printf("Ўiсть хвилин"); }
        if (minutes == 7) { printf("—iм хвилин"); }
        if (minutes == 8) { printf("¬iсiм хвилин"); }
        if (minutes == 9) { printf("ƒев'€ть хвилин"); }
        if (minutes == 10) { printf("ƒес€ть хвилин"); }
        if (minutes == 11) { printf("ќдинадц€ть хвилина"); }
        if (minutes == 12) { printf("ƒванадц€ть хвилини"); }
        if (minutes == 13) { printf("“ринадц€ть хвилини"); }
        if (minutes == 14) { printf("„отирнадц€ть хвилини"); }
        if (minutes == 15) { printf("ѕ'€тнадц€ть хвилин"); }
        if (minutes == 16) { printf("Ўiстнадц€ть хвилин"); }
        if (minutes == 17) { printf("—iмнадц€ть хвилин"); }
        if (minutes == 18) { printf("¬iсiмнадц€ть хвилин"); }
        if (minutes == 19) { printf("ƒев'€тнадц€ть хвилин"); }
    }
    if (minutes > 19) {
        if (A3 == 2) { printf("ƒвадц€ть"); }
        if (A3 == 3) { printf("“ридц€ть"); }
        if (A3 == 4) { printf("—орок"); }
        if (A3 == 5) { printf("ѕ'€тдес€т"); }
        if (A4 == 1) { printf("одна хвилина"); }
        if (A4 == 2) { printf("двi хвилини"); }
        if (A4 == 3) { printf("три хвилини"); }
        if (A4 == 4) { printf("чотири хвилини"); }
        if (A4 == 5) { printf("п'€ть хвилин"); }
        if (A4 == 6) { printf("шiсть хвилин"); }
        if (A4 == 7) { printf("сiм хвилин"); }
        if (A4 == 8) { printf("вiсiм хвилин"); }
        if (A4 == 9) { printf("дев'€ть хвилин"); }
    }
    return 0;
}