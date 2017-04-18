#include<stdio.h>
#define pi 3.14
float luas(float* jr1);
float juring(float* jr1,float* sdt1);
int main()
{
    float jr,sdt;
    printf("R(Jari-Jari) : ");
    scanf("%f",&jr);
    printf("\nS(Sudut)     : ");
    scanf("%f",&sdt);
            printf("Luas Lingkaran adalah %.2f satuan",luas(&jr));
            printf("\nLuas Juring Lingkaran dengan sudut %.2f derajat adalah %.2f satuan",sdt,juring(&jr,&sdt));

    return 0;

}

float luas(float* jr1)
    {
    return *jr1 * *jr1 * pi;
    }

float juring(float* jr1,float* sdt1)
    {
    float luas;
    luas = (*sdt1 * *jr1 * *jr1 * pi)/360;
    return luas;
    }
