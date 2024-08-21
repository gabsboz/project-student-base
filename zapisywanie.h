#ifndef ZAPISYWANIE_H_INCLUDED
#define ZAPISYWANIE_H_INCLUDED

void zapisywanie(d* tablica,const char*plikname, const char *znaki)
{ int numerek= znajdzNajlepszaSrednia(tablica) ;
  int procenty=ile_nie_zdaje(tablica);
     FILE* plik = fopen(plikname, "w");
        d* aktualny = tablica;
        d* aktualnyy = tablica;
        if(znaki=="r"){
            fprintf(plik,"AKTUALNI STUDENCI\n\n");
        while (aktualny != NULL)
        {   printf("%d %s %s %s %s %f\n",aktualny->numer, aktualny->imie, aktualny->nazwisko, aktualny->indeks, aktualny->oceny, aktualny->srednia);
            fprintf(plik, "%d %s %s %s %s %f\n\n",aktualny->numer, aktualny->imie, aktualny->nazwisko, aktualny->indeks, aktualny->oceny, aktualny->srednia);
            aktualny = aktualny->nast;
        }
         fprintf(plik,"NAJLEPSZY STUDENT\n");
        while (aktualnyy != NULL) {
                if(numerek!=0){
            if (numerek == aktualnyy->numer) {
                fprintf(plik, "%d %s %s %s %s %f\n\n", aktualnyy->numer, aktualnyy->imie, aktualnyy->nazwisko, aktualnyy->indeks, aktualnyy->oceny, aktualnyy->srednia);
            }}
            else{fprintf(plik,"robimy igrzyska smierci, najsilniejszy dostanie stypendium\n\n");}
            aktualnyy = aktualnyy->nast;}
        fprintf(plik,"ILE STUDENTOW NIE ZDAJE\n");
        fprintf(plik,"%d",procenty);

        }
        else{
             while (aktualny != NULL)
        {   fprintf(plik, " %s %s %s %s\n", aktualny->imie, aktualny->nazwisko, aktualny->indeks, aktualny->oceny);
            aktualny = aktualny->nast;}}
        fclose(plik);
}

#endif // ZAPISYWANIE_H_INCLUDED
