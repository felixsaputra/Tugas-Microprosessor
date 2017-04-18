// Soal 2

#include<stdio.h>

void tukar(char* a, char* b);

int main ()
{
    char x[100], y[100], i;

    printf("Input 1 (Angka / Huruf)= ");
    scanf("%s", &x);

    printf("Input 2 (Angka / Huruf)= ");
    scanf("%s", &y);

    printf("\nSebelum Ditukar Isi Dari Input 1 adalah %s dan Input 2 adalah %s", x, y);

    for(i=0;i<100;i++)
        tukar(&x[i], &y[i]);

    printf("\nSetelah Ditukar Isi Dari Input 1 adalah %s dan Input 2 adalah %s\n\n", x, y);


return 0;
}

void tukar(char* a, char* b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
