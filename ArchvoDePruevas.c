#include <stdio.h>

int main(void){
    char cc[15];
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};  
    for (int i = 0; i < 10; i++)
    {
        cc[i] = tipos[0][i];
    }
    
    puts(cc);
    return 0;
}