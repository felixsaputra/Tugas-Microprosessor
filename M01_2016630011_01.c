#include<stdio.h>
#define v 3.14

float luas(float *a);
float juring(float *a,float *b);
int main()
{
float jari,x;

    printf("Jari-Jari :");
    scanf("%f",&jari);
    printf("sudut : ");
    scanf("%f",&x);

    printf("\nluas lingkaran : %.2f satuan" ,luas(&jari));
    printf("\nluas juring lingkaran dengan sudut %f derajat : %.2f satuan",x,juring(&jari,&x));
    return 0;
}

float luas(float *a)
{
float luas;
luas=v* *a* *a;
return luas;
}
float juring(float *a,float *b)
{
float luas;
luas = (*b *v* *a* *a)/360;

return luas;
}
