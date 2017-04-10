//Soal 5

#include <stdio.h>

char lulus(int* nilai, int n);

int main ()
{
    char nama[20], indeks;
    int kuliah, nilai[kuliah], i;

    printf("Nama Mahasiswa\t: ");
    scanf("%s", nama);
    printf("\nBanyak Mata Kuliah\t: ");
    scanf("%d", &kuliah);
    printf("\n");

    for (i=0;i<kuliah;i++)
    {
        printf("Nilai ke-%d %s\t: ", i+1, nama);
        scanf("%d", &nilai[i]);
    }

    indeks = lulus(nilai, kuliah);

    if (indeks == 'E')
        printf("\n%s Tidak Lulus dengan Nilai %c\n\n", nama, indeks);
    else
        printf("\n%s Lulus dengan Nilai %c\n\n", nama, indeks);

return 0;
}

char lulus(int* nilai, int n)
{
    int a, jumlah=0;
    float NR;
    for (a=0;a<n;a++)
        jumlah = jumlah + nilai[a];
    NR = jumlah / n;

    if(NR<49)
        return 'E';
    else if (NR<60)
        return 'D';
    else if (NR<70)
        return 'C';
    else if (NR<80)
        return 'B';
    else if (NR>=80)
        return 'A';

}
