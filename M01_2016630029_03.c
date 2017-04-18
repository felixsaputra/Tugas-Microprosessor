#include <stdio.h>

int main ()
{
int j, k;
int arr[40];

printf("banyak bilangan : ");
scanf("%d", &k);

for (j=0;j<k;j++)
{
printf("input ke n adalah : ", j);
scanf("%d", &arr[j]);

printf("hasil dari input ke n adalah %d\n", arr[j]);
printf("alamat dari input ke n adalah %p\n", arr[j]);
printf("hasil dari alamat input ke n adalah %d\n",arr[j]);

return 0;



}




}
