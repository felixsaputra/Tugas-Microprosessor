#include <stdio.h>

int jumlah(int i,int x )
{
int jmlh;
jmlh = i + x;
return jmlh;
}
int kurang(int i,int x)
{
int krg;
krg = i - x;
return krg;
}
int kali(int i,int x)
{
int kl;
kl = i*x;
return kl;
}
int bagi(int i,int x)
{
int bg;
bg = i/x;
return bg;
}
int main ()
{
int kl,bg,jmlh,krg,x,i;
printf(" masukan input : ");
scanf("%d",&i);
printf(" masukan bilangan untuk operator aritmatika :");
scanf("%d",&x);

jmlh=jumlah(i,x);
printf(" Hasil penjumlahan : %d\n",jmlh);

krg=kurang(i,x);
printf(" Hasil pengurangan : %d\n",krg);

kl=kali(i,x);
printf( "Hasil perkalian : %d\n",kl);

bg=bagi(i,x);
printf(" Hasil pembagian : %d\n",bg);
return 0;
}

