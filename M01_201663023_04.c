#include <stdio.h>

int jumlah (int *a,int *jmlh);
int kurang (int *a,int *krg);
int perkalian (int *a,int *kali);
int pembagian (int *a,int *bagi);


int main (){

    int a,jmlh,krg,kali,bagi;

    printf("masukan angka : ");
    scanf("%d",&a);
    printf("masukan angka kembali untuk di operasikan :\n ");
    scanf(" %d %d %d %d ",&jmlh,&krg,&kali,&bagi);
    printf("hasil penjumlahanya adalah = %d\n",jumlah(&a,&jmlh));
    printf("hasil penguranganya adalah = %d\n",kurang(&a,&krg));
    printf("hasil perkaliannya  adalah = %d\n",perkalian(&a,&kali));
    printf("hasil pembagiannya  adalah = %d",pembagian(&a,&bagi));

    return 0;

}

int jumlah (int *a,int *jmlh){

int jumlah;
jumlah = *a + *jmlh;

return jumlah;}

int kurang (int *a,int *krg){

int kurang;
kurang = *a - *krg;

return kurang;}

int perkalian (int *a,int *kali){

int perkalian;
perkalian = *a * *kali;

return perkalian;}

int pembagian (int *a,int *bagi){

int pembagian;
pembagian = *a / *bagi;

return pembagian;}


