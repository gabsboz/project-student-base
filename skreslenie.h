#ifndef SKRESLENIE_H_INCLUDED
#define SKRESLENIE_H_INCLUDED

void skresleniebuahahaha(d **tablica, int *liczba_elementow) {
    d *aktualny = *tablica;
    int numer_do_usuniecia;
    printf("Kogo chcesz skreslic (podaj numer): ");
    scanf("%d", &numer_do_usuniecia);
    if (numer_do_usuniecia < 1 || numer_do_usuniecia > *liczba_elementow) {
        printf("Blad: Podany numer nie istnieje w tablicy.\n");
        return;
    }
    d *poprzedni = NULL;
    for (int i = 0; i < numer_do_usuniecia - 1; i++) {
        if (aktualny == NULL) {
            printf("Blad: Podany numer nie istnieje w tablicy.\n");
            return;}
        poprzedni = aktualny;
        aktualny = aktualny->nast;
    }
    if (aktualny != NULL) {
        if (poprzedni != NULL) {
            poprzedni->nast = aktualny->nast;
        } else {
            *tablica = aktualny->nast;
        }
        (*liczba_elementow)--;
        free(aktualny);
        *tablica = (d *)realloc(*tablica, (*liczba_elementow) * sizeof(d));
        if (*liczba_elementow > 0 && *tablica == NULL) {
            printf("Blad alokacji pamieci przy realokacji tablicy.\n");
            exit(EXIT_FAILURE);
        }
        printf("Student o numerze %d zostal skreslony.\n", numer_do_usuniecia);
    } else {
        printf("Blad: Podany numer nie istnieje w tablicy.\n");
    }}

#endif // SKRESLENIE_H_INCLUDED
