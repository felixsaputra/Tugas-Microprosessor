#include <stdio.h>

int jumlah(int masukkan);
int kurang(int masukkan);
int kali(int masukkan);
int bagi(int masukkan);

int main()
{
    int* input;
    int output;

    printf("Input = ");
    scanf("%d", &input);

    printf("Hasil Penjumlahan\t= %d\n", jumlah(input));
    printf("Hasil Pengurangan\t= %d\n", kurang(input));
    printf("Hasil Perkalian\t\t= %d\n", kali(input));
    printf("Hasil Pembagian\t\t= %d", bagi(input));

}

int jumlah(int masukkan)
{
int isi;
isi=masukkan;
return isi+1;
}

int kurang(int masukkan)
{
int isi;
isi=masukkan;
return isi-1;
}

int kali(int masukkan)
{
int isi;
isi=masukkan;
return isi*1;
}

int bagi(int masukkan)
{
int isi;
isi=masukkan;
return isi/1;
}

