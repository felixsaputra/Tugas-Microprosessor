/**
*
*  M01_2016630013_04.c
*
*  Created on : Apr 10, 2017
*  Author     : Ain Al Qudhat Ilahi Rifai-2016630013
*
*  @file M01_2016630013_04.c
*  @author Ain Al Qudhat Ilahi Rifai-2016630013
*  @brief program dapat menghitung luas lingkaran dari lingkaran dengan sudut tertentu
*
*/


#include <stdio.h>


// mendefinisi PI //

float PI=3.14;

// fungsi menghitung luas lingkaran //

float luas(int r)
{
    return PI*r*r;
}

// fungsi menghitung luas juring lingkaran //

float juring(float teta,float r)
{
    float juring;
    juring=teta/360*PI*r*r;
    return juring;
}

int main()
{
    float r,teta;

// Input radius dan sudut //

    printf("Radius: ");
    scanf("%f", &r);

    printf("Sudut: ");
    scanf("%f", &teta);

// output //

    printf("Luas Lingkaran: %4.2f satuan\n", luas (r));
    printf("Luas Juring lingkaran dengan sudut %4.2f adalah %4.2f satuan.", teta, juring(teta,r));

    return 0;
}
