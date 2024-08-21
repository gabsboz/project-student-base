#ifndef DODAJOC_H_INCLUDED
#define DODAJOC_H_INCLUDED
void dodaj_ocene(d*tablica,int*liczba_elementow){
     d*aktualny=tablica;
    printf("wpisz ktory numer studentaa (nie indeks)\n\n");
    int number;
    scanf("%d",&number);
    for(int i=0;i<number-1;i++)
    {
        aktualny=aktualny->nast;
        }
    int liczbaa;
    printf("jaka liczba chcesz wpisac");
    scanf("%d",&liczbaa);
    char pomoc[20];
    sprintf(pomoc, "%d", atoi(aktualny->oceny) * 10 + liczbaa);
    strcpy(aktualny->oceny, pomoc);
    printf("Jesli chcesz dodac kliknij strzalke w gore\nJesli chcesz cos usunac kliknij strzalke w lewo\nJesli chcesz cos zmienic kliknij strzalke w prawo\nJesli chcesz wyjsc kliknij strzalke w dol\n\n");

}


#endif // DODAJOC_H_INCLUDED
