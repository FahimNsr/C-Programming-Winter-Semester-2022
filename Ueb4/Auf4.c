#include <stdio.h>
#include <math.h>

void f(double x, double y){

    double Funktionswert = x*x - y*y;
    if(Funktionswert < 0) {
        printf("0  der Funktionswert ist nicht definiert\n");
    } else {
        printf("1  der Funktionswert ist definiert\n");
        printf("%lf\n", sqrt(Funktionswert));
    }
};

int main(void)
{

    double x, y= 0;
    printf("x ? ");
    scanf("%lf",&x);

    printf("y ? ");
    scanf("%lf",&y);

    f(x,y);

}
