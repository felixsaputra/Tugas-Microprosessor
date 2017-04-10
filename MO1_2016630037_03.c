#include<stdio.h>

int main()
{

int x,y;
int arr[30];

printf("masukkan banyak bilangan: ");
scanf("%d", &y);

for (x=0;x<y;x++)
{
printf("input bilangan adalah: ", x);
scanf("%d", &arr[x]);

printf("hasil dari input adalah: %i\n",arr[x] );
printf("alamat dari input adalah: %p\n",arr[x]);
printf("hasil dari alamat input adalah:%i\n",arr[x]);

}
return 0;

}
