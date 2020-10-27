#include <stdio.h>
#include <math.h>
int main(){
int a,b,c,o;
float r1=0,r2=0;

printf("Dame el valor del termino de segundo grado:");
scanf("%d", &a);
printf("Dame el valor del termino de primer grado:");
scanf("%d", &b);
printf("Dame el valor del termino independiente:");
scanf("%d", &c);
if(pow(b,2)-(4*a*c) >= 0){

r1= (-b+(sqrt(pow(b,2)-(4*a*c))))/2*a;
r2= (-b-(sqrt(pow(b,2)-(4*a*c))))/2*a;

printf("El valor de las raices de la funcion cuadratica son: Raiz 1 = %.4f y Raiz 2 = %.4f :", r1, r2);
}
 else
 {
   printf("MATH ERROR \n La raiz salio negativa ");
 }
}
