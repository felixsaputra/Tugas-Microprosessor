#include <stdio.h>
#define pi 3.14
float luas (float *r);
float juring (float *r, float *s);
int main()
{
float r1,s1;
printf("masukkan jari jari :");
scanf("%f",&r1);
printf("masukkan sudut : ");
scanf("%f",&s1);

        printf("luas lingkaran adalah %.2f satuan \n",luas(&r1));
        printf("luas juring lingkaran dengan sudut %.2f derajat adalah %.2f satuan\n",s1,juring(&r1,&s1));

return 0;
}

        float luas (float *r)
            {
            return pi * *r * *r;
            }

        float juring (float *r, float *s)
            {
            float luas;
            luas = (*s * pi * *r * *r)/360;
            return luas;
            }
