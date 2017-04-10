#include<stdio.h>
int pertambahan(int *i, int *tambah);
int pengurangan (int *i, int *kurang);
int perkalian (int *i, int *kali);
int pembagian (int *i, int *bagi);

int main (){
int input,tambah,kurang,kali,bagi;
printf("Input n = ");
scanf("%d",&input);

printf("masukkan bilangan yang ingin ditambah dengan n: ");
scanf("%d", &tambah);

printf("masukkan bilangan yang ingin dikurangi dengan n: ");
scanf("%d", &kurang);

printf("masukkan bilangan yang ingin dikali dengan n: ");
scanf("%d", &kali);

printf("masukkan bilangan yang ingin dibagi dengan n: ");
scanf("%d", &bagi);

printf("Hasil penjumlahan: %d\n", pertambahan(&input,&tambah));
printf("Hasil pengurangan: %d\n", pengurangan(&input,&kurang));
printf("Hasil perkalian: %d\n", perkalian(&input,&kali));
printf("Hasil pembagian: %d\n", pembagian(&input,&bagi));
return 0;
}
int pertambahan(int *i, int *tambah){
return *i + *tambah;
}
int pengurangan (int *i, int *kurang){
return *i - *kurang;
}
int perkalian (int *i, int *kali){
return *i * *kali;
}
int pembagian (int *i, int *bagi){
return *i / *bagi;
}
