#include <stdio.h>
int main(){
    float celsius, farenheit;
    printf("Escriba el numero de grados Celsius(ºC) a convertir: ");
    scanf("%f", &celsius);
    farenheit = (celsius * 1.8) + 32;
    printf("La temperatura es de %.2f grados Farenheit(ºF) \nFin del algoritmo\n", farenheit);
    return 0;
}