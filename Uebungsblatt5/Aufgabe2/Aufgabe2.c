#include <stdio.h>

int main(){

    int myArr[5];

    for(int i = 0; i<5; i++){
        printf("%i. number?\t",i+1);
        scanf("%i",&myArr[i]);
    }


    for(int j = 5; j>0; j--){

        for(int i = 0; i<j; i++){
            printf("%i \t",myArr[i]);
        }

        printf("\n");

        for(int i = 0; i<j; i++){
            myArr[i] = myArr[i]+ myArr[i+1];
        }
    }

    return 0;
}
