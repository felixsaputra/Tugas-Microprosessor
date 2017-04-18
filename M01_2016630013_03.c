/**
*
*  M01_2016630013_03.c
*
*  Created on : Apr 10, 2017
*  Author     : Ain Al Qudhat Ilahi Rifai-2016630013
*
*  @file M01_2016630013_04.c
*  @author Ain Al Qudhat Ilahi Rifai-2016630013
*  @brief program dapat melakukan operasi penjumlahan,pengurangan, perkalian dan pembagian
*
*/

#include <stdio.h>

int main()
{
    int a,b,array[10], nilai;
    int *al=array[a];



    printf("Masukan jumlah bilangan: ");
    scanf("%d", &b);

    for(a=1;a<=b;a++)
    {
        printf("Masukan Bilangan ke %d : ",a);
        scanf("%d", &array[a]);
    }

    for(a=1;a<=b;a++)
    {
        printf("Alamat dari input ke %d : %d\n",a,&array[a]);
    }

    for(a=1;a<=b;a++)
    {
        printf("Hasil dari alamat dari input ke %d : %d\n",a,*al);
    }
}
