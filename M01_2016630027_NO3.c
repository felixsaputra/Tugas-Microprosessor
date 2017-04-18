#include <stdio.h>

int main (){

int a,b;
int arr[20];
printf("masukan banyak bilangan: ");
scanf("%d", &a);
    for(b=0;b<a;b++){
printf("Input ke-n: ");
scanf("%d",&arr[b]);
printf("Hasil dari input ke-n adalah %d\n",arr[b]);
printf("Alamat dari input ke-n adalah %p\n",&arr[b]);
printf("Hasil dari alamat dari input ke-n adalah %d", arr[b]);
}
    return 0;
}
