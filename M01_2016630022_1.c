//Soal 1

#include <stdio.h>
#define phi 3.14

float luaslingkaran (float jari);
float luasjuring (float jari, float sudut);

int main ()
{

    float jari2, sudut, lingkar, juring;

    printf("R (Jari-Jari)\t= ");
    scanf("%f", &jari2);

    printf("S (Sudut)\t= ");
    scanf("%f", &sudut);

    lingkar = luaslingkaran(jari2);
    juring = luasjuring(jari2,sudut);

    printf("\nLuas Lingkaran adalah %5.2f satuan\n", lingkar);
    printf("\nLuas Juring Lingkaran dengan sudut %5.2f derajat adalah %5.2f satuan\n", sudut, juring);

return 0;
}

float luaslingkaran (float jari)
{
    float luas;
    luas = phi*(jari*jari);
    return luas;
}
float luasjuring (float jari, float sudut)
{
    float luas;
    luas = phi*(jari*jari)*sudut/360;
    return luas;
}
