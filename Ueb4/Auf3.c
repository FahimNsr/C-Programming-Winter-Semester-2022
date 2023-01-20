#include <stdio.h>
#include <math.h>

void auf3(int zahl, int anzahlDerStellen){
    while (zahl != 0){
        zahl = zahl / 10;
        anzahlDerStellen++;
    }
    printf("%li\n", anzahlDerStellen);
};

int main(void)
{

    long int zahl, anzahlDerStellen= 0;
    printf("Zahl ? ");
    scanf("%li",&zahl);

    auf3(zahl,anzahlDerStellen);

}
