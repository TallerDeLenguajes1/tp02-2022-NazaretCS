#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int main(void){

    int i;
    float vt[N];
    float *PuntVt;
    srand(time(NULL));

    PuntVt = vt;

    for(i = 0;i<N; i++)
    {
        PuntVt[i]=1+rand()%100;
        printf("-- %f \n", PuntVt[i]);
    }

    return 0;
}
