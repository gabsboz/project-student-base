#ifndef WYPISANIE_C_INCLUDED
#define WYPISANIE_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#define size 500

struct dane
{
    int numer;
    char imie[500];
    char nazwisko[500];
    char indeks[500];
    char oceny[500];
    float srednia;
    struct dane *nast;
};
typedef struct dane d;


#endif // WYPISANIE_C_INCLUDED
