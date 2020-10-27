#include <stdio.h>
#include <math.h>
int main(){
 float a , b;
 float res;

printf("Dame el valor del dividendo a= ");
scanf("%f", &a);
printf("Dame el valor del divisor b= ");
scanf("%f", &b);
 if (b != 0){
        res= (a/b);
 printf("La division de %.1f entre %.1f es: %.2f",a , b, res);
 }
 else {
 printf("MATH ERROR \n la division no se puede hacer ya que b es 0");
 }
}
