#include <stdio.h>

int jumlah (int *a, int *jml);
int pengurangan (int *a, int *krg);
int perkalian (int *a, int *kl);
int pembagian (int *a, int *bg);

int main (){

    int a, jml, krg, kl,bg;

    printf("masukan angka: ");
    scanf("%d", &a);
    printf("masukan angka yang ingin di tambah: ");
    scanf("%d", &jml);
    printf("masukan angka yang ingin di kurang: ");
    scanf("%d", &krg);
    printf("masukan angka yang ingin di kali: ");
    scanf("%d", &kl);
    printf("masukan angka yang ingin di bagi: ");
    scanf("%d", &bg);




    printf("Hasil penjumlahan: %d\n", jumlah (&a,&jml));
    printf("Hasil pengurangan: %d\n", pengurangan (&a,&krg));
    printf("Hasil perkalian: %d\n", perkalian (&a, &kl));
    printf("Hasil pembagian: %d\n", pembagian (&a, &bg));

    return 0;
}
int jumlah (int *a, int *jml){
int jumlah;
jumlah = *a + *jml;
return jumlah;}

int pengurangan (int *a, int *krg){
int kurang;
kurang = *a - *krg;
return kurang;}

int perkalian (int *a, int *kl){
int perkalian;
perkalian = *a * *kl;
return perkalian;}

int pembagian (int *a, int *bg){
int pembagian;
pembagian = *a / *bg;
return pembagian;}


