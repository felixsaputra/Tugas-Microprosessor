#include <stdio.h>

void hasil(int bilangan);
void al(int al_bil);
void isi(int al_bil);

int main()
{

int angka[50], n_hasil, alamat,counter, banyak_data;

printf("Banyak Data : ");
scanf("%d", &banyak_data);

for(counter=1;counter<=banyak_data;counter++)
{
printf("Input Ke-%d : ", counter);
scanf("%d", &angka[counter]);
hasil(angka[counter]);

al(&angka[counter]);
isi(angka[counter]);
}
}

void hasil(int bilangan)
{
int angka;
angka=bilangan;
printf("%d\n", bilangan);
}

void al(int al_bil)
{
    int angka;
    angka=al_bil;
    printf("Alamat Input Ke-N adalah %d\n", al_bil);
}

void isi(int al_bil)
{
    int angka;
    angka=al_bil;
    printf("Hasil dari alamat dari input ke-N adalah %d\n", al_bil);
}

