#include <stdio.h>

int main()
{
int a,b;

printf("introduzca el valor de a: ");
scanf("%d", &a);
printf("introduzca el valor de b: ");
scanf("%d", &b);

if (a>b){
    printf("El valor de a es mayor que b: %d > %d", a , b);
}
else
{
    printf("El valor de b es mayor que a; %d > %d", a , b);
}
}

