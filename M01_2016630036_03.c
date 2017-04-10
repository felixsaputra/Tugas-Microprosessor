#include<stdio.h>


int main (){
int array[201], banyak, i;

printf("Anda mau mengetahui alamat berapa data: ");
scanf("%d", &banyak);

for (i = 1;i<=banyak;i++){
printf("Masukkan data: ");
scanf("%d", &array[i]);
printf("Hasil dari input ke-%d adalah %d\n", i,array[i]);
printf("Alamat dari input ke-%d adalah %p\n",i, &array[i]);
printf("Hasil dari alamat dari input ke-%d adalah %d\n", i, array[i]);

}
return 0;



}
