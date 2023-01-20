#include <stdio.h>
#include <math.h>

void swapInteger1(int a, int b){
    printf("swapInteger1 Func\n");
    printf("erste Zahl = %i \tzweite Zahl = %i\n", b,a);
}
void swapInteger2(int* a, int* b){
    printf("swapInteger1 Func\n");
    printf("erste Zahl = %i \tzweite Zahl = %i\n", b,a);
};
void swapInteger3(int** a, int** b){
    printf("swapInteger1 Func\n");
    printf("erste Zahl = %i \tzweite Zahl = %i\n", b,a);

};

int main(void)
{

    swapInteger1(1,2);
    swapInteger2(1,2);
    swapInteger3(1,2);

//     double eingabe;
//     printf("Eingabe ? ");
//     scanf("%lf",&eingabe);
//
//     printf("%lf\n", sinh(eingabe));

//     for(int i = 0 ; i < 11 ; i++) {
//         printf("Eingabe =  %i\tAusgabe = ", i);
//         printf("%lf\n", sinh(i));
//     }

//     printf("Eingabe = 2.2 \tAusgabe = %lf\n", sinh(2.2));

}
