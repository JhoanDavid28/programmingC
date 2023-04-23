/*
    Curso C - Kernifhan & Ritchie
    Programa de conversion de Fahrenheit a Celsius

    cap1, variables, expresiones e interaciones
*/

#include<stdio.h>

int main()
{
    int fahr;
    float celsius;
    for (fahr = 0; fahr <= 300;fahr = fahr + 20)
    {
        celsius = (5.0/9.0)*(fahr - 32);
        printf("%3d\t %6.1f\n",fahr, celsius);
    }
}