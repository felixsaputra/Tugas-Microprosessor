#include<stdio.h>

float luasl( float r);
float luasjl(float r,float sudut);



int main()
{
 float r,s,l,ls;

 printf("input R : ");
 scanf("%f",&r);

 printf("input sudut : ");
 scanf("%f",&s);

 printf("hasil luas lingkaran: %.2f satuan luas",luasl(r));
 printf("\nhasil luas juring lingkaran : %.2f satuan luas",luasjl(r,s));

 return 0;
}

float luasl( float r)
{
    return 3.14*r*r;
}

float luasjl( float r,  float s)
{
s/=360;
return s*3.14*r*r;
}
