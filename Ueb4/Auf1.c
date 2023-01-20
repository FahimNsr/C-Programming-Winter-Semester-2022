/* Datei aufg1-1.c */
/* Berechnung der Summe zweier Zahlen */

#include <stdio.h>
#include <math.h>

double sinh(double x) {
    return 0.5 * (exp(x) - exp(-x));
}

int main(void)
{

    int anfangWert, endWert;
    double eingabe;
//     printf("Eingabe ? ");
//     scanf("%lf",&eingabe);
//
//     printf("%lf\n", sinh(eingabe));


    for(int i = 0 ; i < 11 ; i++) {
        printf("Eingabe =  %i\tAusgabe = ", i);
        printf("%lf\n", sinh(i));
    }

//     printf("Eingabe = 2.2 \tAusgabe = %lf\n", sinh(2.2));

}
