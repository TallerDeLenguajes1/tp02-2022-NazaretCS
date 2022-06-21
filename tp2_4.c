#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 5

struct compu {
    int velocidad; //entre 1 y 3 Gherz
    int anio; //entre 2000 y 2017
    int cantidad; //entre 1 y 8                      [MAX-MIN]+MIN
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;


void CargarCompu(compu *Pcompu);
void MostrarCompus(compu *Pcompu);
void MostrarPCMasVieja(compu *Pcompu);


int main(void){    
    
    compu pc;
    pc.velocidad = rand() % (3-1) + 1;
    pc.anio = rand()%(2017-2000)+2000;
    pc.cantidad = rand()%(8-1)+1;       

    compu PCs[MAX], *punteroPCs, *punteroAux;
    punteroPCs = PCs;
    punteroPCs = malloc(MAX * sizeof(compu));
    
    punteroAux = punteroPCs;  
    CargarCompu(punteroAux);


    punteroAux = punteroPCs;  
    //puts(punteroAux->tipo_cpu);
    MostrarCompus(punteroAux);

    punteroAux = punteroPCs;  
    MostrarPCMasVieja(punteroAux);

    printf("FIN");

    return 0;
}


void CargarCompu(compu *Pcompu){

    int m, j=10;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    char *puntipos;
    puntipos = &tipos[0][0];
    srand(time(NULL));
    
    
    for (int i = 0; i < MAX; i++)
    {           
        Pcompu->anio = rand()%(2017-2000)+2000;
        Pcompu->velocidad = rand() % (3-1) + 1;
        Pcompu->cantidad = rand()%(8-1)+1; 

        m=rand()%(5-0)+0; 
        Pcompu->tipo_cpu = (puntipos + (m * 10 + j));
        puts(Pcompu->tipo_cpu);
        Pcompu++;
    }
    
    
}

void MostrarCompus(compu *Pcompu){
    for (int i = 0; i < MAX; i++)
    {
        printf("-------   COMPUTADORA [ %d ]   --------- \n",i+1);
        printf("La velocidad de la computadora es de: %d \n", Pcompu->velocidad);
        printf("El anio de la computadora es: %d \n", Pcompu->anio);
        printf("La cantidad de Nucleos del procesador es de: %d \n", Pcompu->cantidad);
        printf("El tipo de procesador es: ");
        puts(Pcompu->tipo_cpu);
        printf("\n \n");
        Pcompu++;
    }
    
}


void MostrarPCMasVieja(compu *Pcompu){
    int MasVieja = 2018, posicion=0;
    compu *Puntero;
    Puntero = Pcompu;
    for (int i = 0; i < MAX; i++)
    {
        if (Pcompu->anio < MasVieja)
        {
            MasVieja = Pcompu->anio;
            posicion = i;
        }   
        Pcompu++;     
    }
    
    Pcompu = Puntero;
    printf("---   PC con mas Antiguedad   --- \n");
    printf("Velocidad de la computadora: %d \n",Pcompu[posicion].velocidad);
    printf("Anio de la computadora: %d \n", Pcompu[posicion].anio);
    printf("Cantidad de Nucleos del procesador: %d \n", Pcompu[posicion].cantidad);
    printf("Tipo del Procesador: ");
    puts(Pcompu[posicion].tipo_cpu);
    
}

