#include <stdio.h>
int penjumlahan (int x);
int pengurangan  (int x);
int perkalian (int x);
int pembagian (int x);

int main (void)
{
int x, *a, *b, *c, *d;

int jumlah, kurang ,bagi, kali;

printf("program menghitung \n");

printf("masukan angka : ");
scanf("%i", &x);

printf("jika ditambah 1 :  ");
jumlah = penjumlahan (x);
printf("%i\n", jumlah);

printf("jika dikurangi 1 :  ");
kurang = pengurangan (x);
printf("%i\n", kurang);

printf("jika dikali 1 :  ");
kali = perkalian (x);
printf("%i\n", kali);

printf("jika dibagi 1 :  ");
bagi = pembagian (x);
printf("%i\n", bagi);

return 0;





}

int penjumlahan(int x)
{
int jumlah, *a;
a=&x;
jumlah = *a+1;
return jumlah;



}

int pengurangan (int x)
{
int kurang, *b;
b=&x;
kurang = *b-1;
return kurang;


}
int perkalian (int x)
{
int kali, *c;
c=&x;
kali = *c*1;
return kali;




}
int pembagian (int x)
{
int bagi, *d;
d=&x;
bagi = *d/1;
return bagi;


}
