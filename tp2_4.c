#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct compu {
    int velocidad; //entre 1 y 3 Gherz
    int anio; //entre 2000 y 2017
    int cantidad; //entre 1 y 8                      [MAX-MIN]+MIN
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;

int main(void){
    
    int i, j;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu pc;
    pc.velocidad = rand() % (3-1) + 1;
    pc.anio = rand()%(2017-2000)+2000;
    pc.cantidad = rand()%(8-1)+1;
    

    char *puntipos;
    puntipos = &tipos[0][0];
    srand(time(NULL));
    i=rand()%(6-0)+0;

        for(j = 0;j<10; j++){
            printf("%c ", *(puntipos + (i * 10 + j)));
        }
        printf("\n");

    return 0;
}