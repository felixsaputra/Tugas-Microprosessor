#include <stdio.h>
#define pi 3.14

float luas_l(float r);
float juring_l(float jr,float sudut);

int main()
{
float jari, sudut;

printf("R(Jari-jari)\t = ");
scanf("%f", &jari);

printf("S(Sudut)\t = ");
scanf("%f", &sudut);

printf("Luas Lingkaran adalah %5.2f Satuan\n", luas_l(jari));

printf("Luas Juring Lingkaran dengan sudut %2.0f derajat adalah %5.2f Satuan\n", sudut, juring_l(jari, sudut));

}

float luas_l(float r)
{
return r*r*pi;
}

float juring_l(float jr, float sudut)
{
return jr*jr*pi*(sudut/360);
}
