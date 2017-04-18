/**
*
*  M01_2016630013_02.c
*
*  Created on : Apr 10, 2017
*  Author     : Ain Al Qudhat Ilahi Rifai-2016630013
*
*  @file M01_2016630013_04.c
*  @author Ain Al Qudhat Ilahi Rifai-2016630013
*  @brief program dapat menukan dua buah input yang diberikan dengan menggunakan pointer
*
*/



#include <stdio.h>

int main()
{
// deklarasi variabel //
    char a[10],b[10];
    char *c,*d;

// pointer //
    c=&a;
    d=&b;

// input angka/huruf 1 dan 2 //

    printf("Input 1(Angka / Huruf)= ");
    scanf("%s", a);

    printf("Input 2(Angka / Huruf)= ");
    scanf("%s", b);

// output //

    printf("Isi dari input 1 adalah %s dan Input 2 adalah %s\n", a,b);
    printf("Isi dari input 1 adalah %s dan Input 2 adalah %s\n", b,a);
    printf("Isi dari input 1 adalah %s dan Input 2 adalah %s\n", d,c);

    return 0;


}
