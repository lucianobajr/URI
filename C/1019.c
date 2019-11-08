#include <stdio.h>

int main(void){
    int tempo,hora,minuto,segundo;
    scanf("%d",&tempo);
    hora=tempo/3600;
    tempo=tempo-hora*3600;
    minuto=tempo/60;
    tempo=tempo-minuto*60;
    segundo=tempo;
    printf("%d:%d:%d\n",hora,minuto,segundo);
}