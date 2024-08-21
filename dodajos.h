#ifndef DODAJOS_H_INCLUDED
#define DODAJOS_H_INCLUDED

void dodaj_os(d*tablica,int*liczba_elementow)
{
    d*aktualny=tablica;

    while(aktualny->nast!=NULL)
        {
        aktualny= aktualny->nast;
        }

        (*liczba_elementow)++;
        aktualny->nast = (struct dane*)realloc(aktualny->nast, (*liczba_elementow) * sizeof(struct dane));
        aktualny=aktualny->nast;
        aktualny->numer=*liczba_elementow;
        printf("Podaj dane studenta (imie nazwisko indeks oceny): ");
        scanf("%s %s %s %s", aktualny->imie, aktualny->nazwisko, aktualny->indeks, aktualny->oceny);

        printf("Jesli chcesz dodac kliknij strzalke w gore\nJesli chcesz cos usunac kliknij strzalke w dol\nJesli chcesz cos zmienic kliknij strzalke w prawo\nJesli chcesz wyjsc kliknij strzalke w dol\n\n");


}

#endif // DODAJOS_H_INCLUDED
