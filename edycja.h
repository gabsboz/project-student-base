#ifndef EDYCJA_H_INCLUDED
#define EDYCJA_H_INCLUDED

void edycja(d*tablica,int *liczba_elementow)
{ int a;
    char key;
     printf("Jesli chcesz dodac kliknij strzalke w gore\nJesli chcesz cos usunac kliknij strzalke w lewo\nJesli chcesz cos zmienic kliknij strzalke w prawo\nJesli chcesz wyjsc kliknij strzalke w dol\n\n");
    while (1)
        {
            if (_kbhit())
            {
                key = _getch();
                if (key == 80)
                {break;}
                if(key==72)
                {printf("Jesli chcesz dodac studenta wcisnij 1\nJesli chcesz dodac ocene wcisnij 2\n\n");
                scanf("%d",&a);
                if(a==1){
                 dodaj_os(tablica,liczba_elementow);
                   }
                else{
                    dodaj_ocene(tablica,liczba_elementow);
                }}
                if(key==77)
                {
                    edytor(tablica,liczba_elementow);
                }
                 if(key==75)
                {
                  skresleniebuahahaha(&tablica,liczba_elementow);
                  zapisywanie(tablica,"tekst.txt","t");
                  printf("Nie mozesz skreslic wiecej jak 1 osoby podczas dzialania programu,bo to nie po bozemu\n");
                  printf("DO WIDZENIA <3");
                  exit(0);
                }
                  zapisywanie(tablica,"tekst.txt","t");
                 srednia(tablica);
                }}}

#endif // EDYCJA_H_INCLUDED
