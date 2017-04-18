#include <stdio.h>
#define v 3.14

float luas (float *x);
float juring (float *x, float *y);

int main()
{
system("color b7");
                  float r, s;

printf("Jari-jari   :   ");
scanf("%f", &r);

printf("sudut       :   ");
scanf("%f", &s);

printf("luar lingkaran = %.2f", luas (&r));
printf("\n");
printf("luas juring adalah %.2f ", juring(&r,&s));

return 0;







}
float luas(float *x)
{
float luas;
luas = v * *x * *x;

return luas;
}
float juring(float *x, float*y)
{
float luas;
luas = (*y * v * *x * *x)/360;
return luas;


}
