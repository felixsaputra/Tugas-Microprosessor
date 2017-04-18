#include <stdio.h>
int array [100],rata_rata;
int main()
{

int a,b,p;
char n[100];
float NR(int *p);
    printf("Nama Mahasiswa : ");
    scanf("%s", &n[100]);
    printf("Banyak Mata Kuliah : ");
    scanf("%d", &a);
    printf("Nilai ke-n Mahasiswa : ");
    scanf("%d", &b);

    if(NR(&a)>=80)
    {
        printf("Mahasiswa mendapat nilai A\n");
    }
    else if(NR(&a)>=70)
    {
        printf("mahasiswa mendapat nilai B\n");
    }
    else if(NR(&a)>=60)
    {
        printf("mahasiswa mendapat nilai C\n");
    }
    else if(NR(&a)>=50)
    {
        printf("mahasiswa mendapat nilai D\n");
    }
    else
    {
        printf("mahasiswa mendapat nilai E\n");
    }
return 0;
}
float NR(int *p){
int h;

for(h=0;h<*p;h++)
{
    printf("masukkan data :");
    scanf("%d",&array[h]);
}
rata_rata=rata_rata+array[h];
rata_rata=rata_rata/ *p;
return rata_rata;
}
