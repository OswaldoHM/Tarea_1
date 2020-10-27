#include <stdio.h>
#include <math.h>
int main(){
int r;
float Area, Perimetro;

printf("Dame el valor del radio del circulo para calcular su Area y Perimetro:");
scanf("%d", &r);

Area = (3.1416)*pow(r,2);
Perimetro = 2*3.1416*r;

printf("\n El valor del Area es: %f unidades al cuadrado", Area);
printf("\n El valor del Perimetro es: %f unidades", Perimetro);
}
