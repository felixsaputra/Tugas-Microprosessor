#include <stdio.h>
#define pi 3.14

float luas(float r);
float j(float r, float s);

int main()
{
    float r, s, l, j1;

    printf("R (Jari-Jari)\t= ");
    scanf("%f",&r);
    printf("S (Sudut)\t= ");
    scanf("%f",&s);

    l=luas(r);
    printf("\n");
    j1=j(r,s);
}

float luas(float r)
{
    float luas_1;
    luas_1=pi*r*r;
    printf("\nLuas lingkaran adalah %5.2f",luas_1);
}

float j(float r, float s)
{
    float j2;
    j2=pi*r*r*s/360;
    printf("Luas juring lingkaran dengan sudut %5.2f derajat adalah %5.2f\n", s, j2);
}
