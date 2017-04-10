#include <stdio.h>

int jumlah(int bilangan);
int kurang(int bilangan);
int kali(int bilangan);
int bagi(int bilangan);

int main()
{
    int bil, jml, krg, kl, bg ;

    printf("Masukkan Input : ");
    scanf("%d", &bil);


    jml=jumlah(bil);
    krg=kurang(bil);
    kl=kali(bil);
    bg=bagi(bil);

    printf("\nHasil Penjumlahan = %d", jml);
    printf("\nHasil Pengurangan = %d", krg);
    printf("\nHasil Perkalian = %d", kl);
    printf("\nHasil Pembagian = %d", bg);
}

int jumlah(int bilangan){
return (bilangan+1);
}

int kurang(int bilangan){
return (bilangan-1);
}

int kali(int bilangan){
return (bilangan*1);
}

int bagi(int bilangan){
return (bilangan/1);
}

