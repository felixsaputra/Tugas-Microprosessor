#include<stdio.h>
int main()
{
int input,kurang,bagi,kali,tambah;
printf("Input : ");
scanf("%d",&input);

printf("Hasil penjumlahan       : %d ",penjumlahan(&input,&tambah));
printf("\nHasil pengurangan       : %d ",pengurangan(&input,&kurang));
printf("\nHasil perkalian         : %d ",perkalian(&input,&kali));
printf("\nHasil pembagian         : %d ",pembagian(&input,&bagi));

return 0;

}
int penjumlahan(int* input1)
                {
                return *input1 +1;
                }

int pengurangan(int* input1)
                {
                return *input1 -1;
                }

int perkalian   (int* input1)
                {
                return *input1 *1;
                }

int pembagian   (int* input1)
                {
                return *input1 /1;
                }


