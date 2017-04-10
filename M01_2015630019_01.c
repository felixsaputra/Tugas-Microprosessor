#include <stdio.h>
#include <math.h>
#define phi 3.14


int main ()

{
int sudut ;
float L,sudut2,jari ;

printf("Masukan jari jari = ");
scanf("%d", &jari);
printf("Masukan sudut =");
scanf("%d", &sudut);
printf("\n");

L=phi*pow(2,jari);
sudut2= sudut/360*phi*pow(2,jari);

printf("Luas Lingkaran = %f", L);
printf("\n Luas Juring = %f", sudut2);

return 0;

}
