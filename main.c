#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#define size 500


#include "wypisanie.c"
#include "wczytaj.h"
#include "srednia.h"
#include "ileniezdaje.h"
#include "najlepsi.h"
#include "zapisywanie.h"
#include "zapiszdopliku.h"
#include "dodajos.h"
#include "skreslenie.h"
#include "dodajoc.h"
#include "edytor.h"
#include "edycja.h"

int main()
{
    char key;
    int liczba_elementow;
    d* tablica = wczytaj_z_pliku("tekst.txt", &liczba_elementow);

    if (tablica != NULL)
    {
        printf("WITAMY W BAZIE DANYCH \n*Jezeli chcesz edytowac baze kliknij strzalke w gore\n*Jezeli chcesz wygenerowac raport kliknij strzalke w prawo\n*Jezeli chcesz wygenerowac srednie studentow kliknij strzalke w lewo\n*Jezeli chcesz wyjsc kliknij strzalke w dol\n\n");


        while (1)
        {
            if (_kbhit())
            {
                key = _getch();

                if (key == 80)
                {
                    break;
                }
                else if (key == 77)
                {
                    zapisz_do_pliku(tablica, liczba_elementow);
                    printf("WITAMY W BAZIE DANYCH \n*Jezeli chcesz edytowac baze kliknij strzalke w gore\n*Jezeli chcesz wygenerowac raport kliknij strzalke w prawo\n*Jezeli chcesz wygenerowac srednie studentow kliknij strzalke w lewo\n*Jezeli chcesz wyjsc kliknij strzalke w dol");
                    printf("\n\n");
                }
                else if (key == 75)
                {
                    srednia(tablica);
                    printf("WITAMY W BAZIE DANYCH \n*Jezeli chcesz edytowac baze kliknij strzalke w gore\n*Jezeli chcesz wygenerowac raport kliknij strzalke w prawo\n*Jezeli chcesz wygenerowac srednie studentow kliknij strzalke w lewo\n*Jezeli chcesz wyjsc kliknij strzalke w dol");
                    printf("\n\n");
                }
                else if(key==72)
                {
                  edycja(tablica,&liczba_elementow);
                  printf("WITAMY W BAZIE DANYCH \n*Jezeli chcesz edytowac baze kliknij strzalke w gore\n*Jezeli chcesz wygenerowac raport kliknij strzalke w prawo\n*Jezeli chcesz wygenerowac srednie studentow kliknij strzalke w lewo\n*Jezeli chcesz wyjsc kliknij strzalke w dol");
                    printf("\n\n");
                }
            }
        }

        d* temp;
        while (tablica != NULL)
        {
            temp = tablica;
            tablica = tablica->nast;
            free(temp);
        }
    }
    else
    {
        printf("Blad podczas wczytywania danych z pliku.\n");
    }

    printf("DO WIDZENIA <3");
    return 0;
    getch();
}
