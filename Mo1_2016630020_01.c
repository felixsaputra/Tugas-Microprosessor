#include <stdio.h>

float hitung_luas(float jari)
{
float luas;
luas = 3.14 * jari * jari;
return luas;
}

float hitung_juring(float jari, float sudut)
{
float luas_juring;
luas_juring = sudut/360 * 3.14 *jari *jari;
return luas_juring;
}
int main ()
{
float luas_juring,luas,sudut,jari;

printf("masukan jari-jari : ");
scanf("%f",&jari);
printf("masukan sudut : ");
scanf("%f",&sudut);

luas=hitung_luas(jari);
printf(" Luas Lingkaran adalah %f satuan \n",luas);

luas_juring=hitung_juring(jari,sudut);
printf(" Luas Juring Lingkaran dengan sudut %f Derajat adalah %f satuan \n",sudut,luas_juring);

return 0;
}
