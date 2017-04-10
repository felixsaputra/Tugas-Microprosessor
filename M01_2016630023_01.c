#include <stdio.h>
#define v 3.14

float luas (float *x);
float juring (float *x,float *y);

int main ()

{
    float r,s;

printf("masukan jarijari : ");
scanf("%f",&r);
printf("masukan sudut    : ");
scanf("%f",&s);
printf("luas lingkaran nya adalah = %.2f ",luas(&r));
printf("luas juring nya adalah    = %.2f ",juring(&r,&s));


}

float luas (float *x){
float luas;

luas = v * *x * *x;

return luas;}

float juring (float *x,float *y){
float juring;

juring = (*y * v * *x * *x)/360;

return juring;}






