#include <stdio.h>

int main(){

int a,r=0;
printf("Teclea un numero y te dire si es par o impar:");
scanf("%d", &a);

r=a%2;

if(r==0){
  printf("%d Es un numero par", a);
}
else
{
 printf("%d Es un numero impar", a);
}
}
