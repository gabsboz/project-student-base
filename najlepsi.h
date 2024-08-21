#ifndef NAJLEPSI_H_INCLUDED
#define NAJLEPSI_H_INCLUDED

int znajdzNajlepszaSrednia(d*tablica) {

    int numerek;
    int sredniaa;
    int licznik;
    int i=0;
   d *aktualnaOsoba = tablica;

    while (aktualnaOsoba != NULL) {
        if (aktualnaOsoba->srednia >sredniaa) {
            sredniaa=aktualnaOsoba->srednia;
            numerek=aktualnaOsoba->numer;
        }
        else if(aktualnaOsoba->srednia ==sredniaa)
        {
            numerek=0;
        }
        aktualnaOsoba = aktualnaOsoba->nast;
    }

    return numerek;
}

#endif // NAJLEPSI_H_INCLUDED
