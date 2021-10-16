#include <stdio.h>
#include <math.h>

int main(void)
{
float a,b,c;

printf("Podaj współczynniki a,b,c: ax^2 + bx + c\n");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);

if(a == 0)
{
printf("To nie jest funkcja kwadratowa\n");
return 0;
}

float x1,x2,delta;

delta = b*b - 4*a*c;

printf("Delta wynosi %f\n",delta);

if(delta < 0)
{
printf("Ta funkcja nie ma miejsc zerowych\n");
return 0;
}
else if(delta == 0)
{
x1 = (-b)/2*a;
printf("Ta funkcja ma jedno miejsce zerowe równe: %f\n",x1);
return 0;
}
else
{
x1 = (-b + sqrt(delta) )/2*a;
x2 = (-b - sqrt(delta) )/2*a;
printf("Ta funkcja ma dwa miejsca zerowe równe: x1 = %f i x2 = %f\n",x1,x2);
return 0;
}
}
