#ifndef WCZYTAJ_C_INCLUDED
#define WCZYTAJ_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#define size 500

d* wczytaj_z_pliku(const char* nazwa_pliku, int* liczba_elementow)
{
    FILE* plik = fopen(nazwa_pliku, "r");
    if (plik == NULL)
    {
        printf("Blad otwarcia pliku");
        return NULL;
    }

    d* tablica = NULL;
    d* poprzedni = NULL;
    *liczba_elementow = 0;

    while (!feof(plik))
    {
        d* nowy = (d*)malloc(sizeof(d));
        if (nowy == NULL)
        {
            printf("Blad alokacji pamieci dla nowego elementu");
            fclose(plik);
            return NULL;
        }
        nowy->numer = *liczba_elementow + 1;
        if (fscanf(plik," %s %s %s %s ", nowy->imie, nowy->nazwisko, nowy->indeks, nowy->oceny) == 4)
        {
            nowy->nast = NULL;
            if (poprzedni != NULL)
            {
                poprzedni->nast = nowy;
            }
            else
            {
                tablica = nowy;
            }
            poprzedni = nowy;
            (*liczba_elementow)++;
        }
        else
        {
            printf("Blad wczytywania danych studenta\n");
            free(nowy);
        }
    }

    fclose(plik);
    return tablica;
}

#endif // WCZYTAJ_C_INCLUDED
