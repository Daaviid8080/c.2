#include <stdio.h>
int main (){
    float celsius, grados_farenheit;
    printf("Leer número real.");
    scanf("%f", &celsius);
    grados_farenheit = (celsius * (9/5)) + 32;
    printf("Los grados farenheit son: %.2f", grados_farenheit);}