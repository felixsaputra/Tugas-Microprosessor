#include <stdio.h>
#define pi 3.14
float l (float *z);
float j(float *z,float *y);
int main()
{
    float x,y;
    printf("R(jari-jari) lingkaran : ");
    scanf("%f", &x);
    printf("S(sudut) lingkaran : ");
    scanf("%f", &y);

    printf("Luas Lingkaran adalah %.3f satuan\n",l(&x));
    printf("Luas Juring Lingkaran dengan sudut %f derajat adalah %.3f\n",&y,j(&x,&y));

}

float l (float *z){
return pi * *z * *z;
}

float j (float *z,float *y){
return pi * *z * *z  *y/360;
}
