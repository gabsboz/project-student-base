#ifndef ILENIEZDAJE_H_INCLUDED
#define ILENIEZDAJE_H_INCLUDED

int ile_nie_zdaje(d* tablica) {
    d* aktualny = tablica;
    int liczba, licznik, calosc = 0;
    float n, liczby = 0;

    while (aktualny != NULL) {
        liczby = 0;
        liczba = atoi(aktualny->oceny);
        n = strlen(aktualny->oceny);

        int pomoc = liczba;
        for (int i = 0; i < n; i++) {
            liczby = pomoc % 10;
            pomoc = pomoc / 10;
            if (liczby == 2.0) {
                licznik = 1;
            }
        }
        calosc = calosc + licznik;
        licznik = 0;
        aktualny = aktualny->nast;
    }

    return calosc;
}

#endif // ILENIEZDAJE_H_INCLUDED
