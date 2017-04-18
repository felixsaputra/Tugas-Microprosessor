#include <stdio.h>

int penjumlahan (int a);
int pengurangan (int a);
int perkalian   (int a);
int pemabagian  (int a);

int main (void){
int a,*w,*x,*y,*z;
int jumlah,kurang,kali,bagi;

printf("masukkan angka :");
scanf("%i",&a);

printf("\nhasil dari penjumlahan:");
jumlah=penjumlahan(a);
printf("%i\n",jumlah);

printf("\nhasil dari pengurangan:");
kurang=pengurangan(a);
printf("%i\n",kurang);

printf("\nhasil dari perkalian:");
kali=perkalian(a);
printf("%i\n",kali);

printf("\nhasil dari pembagian:");
bagi=pembagian(a);
printf("%i\n",bagi);

return 0;}

int penjumlahan (int a){
int jumlah,*w;
w=&a;
jumlah=*w+1;
return jumlah;
}

int pengurangan (int a){
int kurang,*x;
x=&a;
kurang=*x-1;
return kurang;
}

int perkalian(int a){
int kali,*y;
y=&a;
kali=*y*1;
return kali;
}

int pembagian (int a){
int bagi,*z;
z=&a;
bagi=*z/1;
return bagi;
}

