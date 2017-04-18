#include<stdio.h>
#define v 3.14

float luas (float *x);
float luasj (float *x,float*y);

int main ()
{
float a,b;

printf("input jari jari: ");
scanf("%f",&a);

printf("input sudut: ");
scanf("%f",&b);

printf("luas lingkaran adalah: %.2f ",luas (&a));
printf("luas juring adalah: %.2f ",luasj (&a,&b));

return 0;
}

float luas(float *x){
float luas;
luas = v * (*x) * (*x);
return luas;
}

float luasj(float *x,float *y)
{
float luas;
luas = ((*y) * v * (*x) * (*x));
return luas;
}

