#include <stdio.h>
int fungsi(char nama[100], int n, int total)
{
float rata;
char hasil;
rata=total/n;

if(rata>=80){
    hasil='A';
    }
    else if(rata<80 && rata>=70){
    hasil='B';
    }
    else if(rata<70 && rata>=49){
    hasil='C';
    }
    else(rata<49);{
    hasil='E';
    }

    printf("\nlulus dengan hasil %c\n", hasil);
}

int main()
{
int n, nilai, array[100], total=0, i, hasil;
char nama;

printf("Nama mahasiswa: ");
scanf("%s", &nama);
printf("Banyak Mata Kuliah (lebih dari 2): ");
scanf("%d", &n);
    //loop nilai-nilai mata kuliah
    for(i=0; i<n; i++)
    {
        printf("Nilai ke %d mahasiswa : ", i+1);
        scanf("%d", &array[i]);

    total=total+array[i];
    }

hasil=fungsi(nama, n, total);
return 0;
}
