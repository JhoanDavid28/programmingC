/*
    Curso C - Kernifhan & Ritchie
    Programa de conversion de Fahrenheit a Celsius

    cap1, variables, expresiones e interaciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr = 0, 20, ..., 300

main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    //printf("%d\n", upper); //%d -> indica que se imprimirá un numero. Transforma el numero a un string
    fahr = lower;

    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);   // \t -> tabular
        fahr += step;
    }
}