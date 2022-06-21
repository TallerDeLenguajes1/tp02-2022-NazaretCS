#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5
#define M 7

int main(void){

    int i,j;
    float mt[N][M];
    float *PuntMT;
    PuntMT = &mt[0][0];

    srand(time(NULL));

    for(i = 0;i<N; i++){
        for(j = 0;j<M; j++){
            *(PuntMT + (i * 7 + j))=1+rand()%100;
            printf("%.2f ", *(PuntMT + (i * 7 + j)));
        }
        printf("\n");
    }
    return 0;
}

