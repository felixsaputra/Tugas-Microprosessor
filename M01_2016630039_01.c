#include <stdio.h>

float cariluas(float a);
float cariluasjuring(float t,float luas);

int main(void){
float a,t,luas,juring;
int b,w,keluar;

while (w !=3){
printf("\n1.luas lingkaran\n2.luas juring lingkaran\n3.keluar");
printf("\npilihan anda:");
scanf("%d", &w);



switch(w){
case 1:
printf("\nmasukkan alas:");
scanf("%f",&a);
luas=cariluas(a);
printf("luas=%fsatuan\n",luas);
break;


case 2:
printf("\nmasukkan alas:");
scanf("%f",&a);
printf("\nmasukkan sudut:");
scanf("%f",&t);
juring=cariluasjuring(t,luas);
printf("luasjuring=%fsatuan\n",juring);
break;

case 3:
printf("terimakasih");
break;

}
}

return 0;}

float cariluas(float a){
float luas;
luas=3.14*a*a;
return luas;
}

float cariluasjuring(float t,float luas){
float juring;
juring=t/360*luas;
return juring;
}
