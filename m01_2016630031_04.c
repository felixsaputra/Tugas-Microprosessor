#include <stdio.h>
int main()
{
int input1,tambah1,kurang1,kali1,bagi1;
printf("input : ");
scanf("%d",&input1);

    printf("hasil penjumlahan : %d\n",penjumlahan(&input1,&tambah1));
    printf("hasil pengurangan : %d\n",pengurangan(&input1,&kurang1));
    printf("hasil perkalian   : %d\n",perkalian(&input1,&kali1));
    printf("hasil pembagian   : %d\n",perkalian(&input1,&bagi1));
return 0;
}

    int penjumlahan (int *input)
    {
    return *input +1;
    }
     int pengurangan (int *input)
    {
    return *input -1;
    }
     int perkalian (int *input)
    {
    return *input *1;
    }
     int pembagian (int *input)
    {
    return *input /1;
    }
