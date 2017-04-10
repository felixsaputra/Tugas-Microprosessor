#include<stdio.h>
#define pi 3.14
float luas (float *r);
float juring(float *r, float *s);
int main (){
float r1,s1;

printf("R(Jari-jari) = ");
scanf ("%f", &r1);

printf("S(sudut) = ");
scanf("%f", &s1);


printf("Luas lingkaran adalah %.2f Satuan\n",luas(&r1) );
printf("Luas juring liungkaran dengan sudut %.2f derajat adalah %.2f Satuan\n",s1,juring(&r1,&s1));


return 0;
}

float luas (float *r){
return pi * *r * *r;
}

float juring(float *r, float *s){
return (pi * *r * *r * *s)/360;
}
