#include <stdio.h>
int bilangan(int* b,int a)
{
int z;
for (z=0;z<a;z++)
{
printf("Hasil dari input ke-%d adalah %d \n",z+1,b[z]);
printf("Alamat dari input ke-n adalah %d \n",&b);
printf("Hasil dari alamat dari input ke-%d adalah %d \n",z+1,b[z]);
}
}
int main ()
{

int a;
printf("masukan jumlah bilangan yang akan diinput : ");
scanf("%d",&a);

int nilai[a],b;
for (b=0;b<a;b++)
{
printf("input bilangan ke-%d :",b+1);
scanf("%d",&nilai[b]);
}
bilangan(nilai, a);
return 0;

}
