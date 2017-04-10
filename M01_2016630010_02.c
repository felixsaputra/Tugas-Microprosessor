#include<stdio.h>
int x(int *z);
int w(int *y);
int main()
{
int pertama,kedua;
printf("Masukkan input pertama : ");
scanf("%d",&pertama);
printf("Masukkan input kedua   : ");
scanf("%d",&kedua);
    printf("Isi dari input pertama adalah %d dan input kedua adalah %d(sebelum swap)",pertama,kedua);
    printf("\nIsi dari input pertama adalah %d dan input kedua adalah %d",x(&kedua),w(&pertama));
    printf("\nIsi dari input pertama adalah %d dan input kedua adalah %d(sesudah swap)",x(&kedua),w(&pertama));
  return 0;
}

int x(int *z)
    {
    int nilai;
    nilai = *z;
    return nilai;
    }
int w(int *y)
    {
    int nilai;
    nilai = *y;
    return nilai;
    }
