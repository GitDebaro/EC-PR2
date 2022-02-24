#include <stdio.h>
int main(){
    float km, millas, yardas, pies;
    printf("Escribe el numero de kilometros: ");
    scanf("%f", &km);
    millas = km/1.6;
    yardas = km * 100000 / 91.44;
    pies = km * 100000 / 30.48;
    printf("Las Millas son: %f \nLas yardas son: %f \nLos pies son: %f \nFin del algoritmo\n", millas, yardas, pies);
    return 0;
}