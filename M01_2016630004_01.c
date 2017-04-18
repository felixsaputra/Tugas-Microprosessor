#include <stdio.h>

float lingkaran (float jari)
{
    float luaslingkaran;
    luaslingkaran = jari*jari*3.14;

    return luaslingkaran;
}

float juring (float luaslingkaran, float sudut)
{
    float luasjuring;
    luasjuring=sudut*luaslingkaran/360;

    return luasjuring;
}



int main()
{
float sudut, jari, luaslingkaran, luasjuring;

printf("masukan jari-jari: ");
scanf("%f", &jari);

printf("masukan besar sudut : ");
scanf("%f", &sudut);

luaslingkaran=lingkaran(jari);
luasjuring=juring(luaslingkaran, sudut);

printf("luas lingkaran adalah %.2f\n", luaslingkaran);
printf("luas juring adlah %.2f", luasjuring);

return 0;
}
