#include <stdio.h>

int main() {

    while(1){
        int myArr[30], min, max;

        for(int i=0; i<30; i++){
            printf("%i. Zahl: ", i+1);
            scanf("%d",&myArr[i]);
        }

        printf("reverse order\n");

        min =  myArr[29];
        max =  myArr[29];

        for(int i=29; i>=0; i--){
            printf("%i \t", myArr[i]);
            if(i%5 == 0) printf("\n");

            if(myArr[i] < min) min = myArr[i];
            if(myArr[i] > max) max = myArr[i];
        }

        printf("minimum = %i\t maximum = %i\n", min, max);
    }

    return 0;
}
