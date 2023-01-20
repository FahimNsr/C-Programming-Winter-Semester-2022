#include <stdio.h>

int main(){

    while(1){
        int tringleLength;

        printf("tringleLength?\t");
        scanf("%i",&tringleLength);

        int myArr[tringleLength];

        for(int i = 0; i<tringleLength; i++){
            printf("%i. number?\t",i+1);
            scanf("%i",&myArr[i]);
        }


        for(int j = tringleLength; j>0; j--){

            for(int i = 0; i<j; i++){
                printf("%i \t",myArr[i]);
            }

            printf("\n");

            for(int i = 0; i<j; i++){
                myArr[i] = myArr[i]+ myArr[i+1];
            }
        }

        printf("\n");
    }
    return 0;
}
