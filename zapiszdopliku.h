#ifndef ZAPISZDOPLIKU_H_INCLUDED
#define ZAPISZDOPLIKU_H_INCLUDED

void zapisz_do_pliku(struct dane *tablica, int liczba_elem)
{   srednia(tablica);
    char p;
    printf("Czy chcesz zapisac raport do pliku?\nJesli tak napisz T, w przeciwnym razie N\n\n");
    scanf(" %c", &p);
    if (p == 'T')
    {
       zapisywanie(tablica,"raport.txt","r");
    }
    else if (p == 'N')
    {
        struct dane *aktualny = tablica;
        while (aktualny != NULL)
        {
            printf("%d %s %s %s %s %f\n", aktualny->numer, aktualny->imie, aktualny->nazwisko, aktualny->indeks, aktualny->oceny, aktualny->srednia);
            aktualny = aktualny->nast;
        }
    }
    else
    {
        printf("Niepoprawny wybor. Zapisywanie raportu zostanie pominiete.\n\n");
    }
}

#endif // ZAPISZDOPLIKU_H_INCLUDED
