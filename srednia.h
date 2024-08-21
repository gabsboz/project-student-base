#ifndef SREDNIA_H_INCLUDED
#define SREDNIA_H_INCLUDED

void srednia(d *tablica) {
    d *aktualny = tablica;

    while (aktualny != NULL) {
        int liczba = atoi(aktualny->oceny);
        float liczby = 0.0;
        float n = 0.0;

        while (liczba > 0) {
            liczby += liczba % 10;
            liczba /= 10;
            n++;
        }
        float a=liczby/n;
            aktualny->srednia = a;

        aktualny = aktualny->nast;
    }
}

#endif // SREDNIA_H_INCLUDED
