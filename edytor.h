#ifndef EDYTOR_H_INCLUDED
#define EDYTOR_H_INCLUDED

void edytor(d*tablica,int*liczba_elementow){
    d* aktualny = tablica;
    printf("Wpisz numer studenta (nie indeks): ");
    int number;
    scanf("%d", &number);

    for (int i = 0; i < number - 1; i++) {
        if (aktualny == NULL) {

            printf("Blad: Nieprawidlowy numer studenta.\n");
            return;}
        aktualny = aktualny->nast;
    }
    printf("Co chcesz zmieniæ?\n");
    printf("1. Imie\n2. Nazwisko\n3. Indeks\n4. Oceny\n");
    int wyrocznia;
    scanf("%d", &wyrocznia);

    printf("Napisz now¹ wartosc: ");
    char pomoc[size];
    scanf(" %[^\n]", pomoc);

    switch (wyrocznia) {
        case 1:
            strcpy(aktualny->imie, pomoc);
            break;
        case 2:
            strcpy(aktualny->nazwisko, pomoc);
            break;
        case 3:
            strcpy(aktualny->indeks, pomoc);
            break;
        case 4:
            strcpy(aktualny->oceny, pomoc);
            break;
        default:
            printf("Blad: Nieprawidlowy wybor.\n");

            return;
    }
printf("Jesli chcesz dodac kliknij strzalke w gore\nJesli chcesz cos usunac kliknij strzalke w lewo\nJesli chcesz cos zmienic kliknij strzalke w prawo\nJesli chcesz wyjsc kliknij strzalke w dol\n\n");


}

#endif // EDYTOR_H_INCLUDED
