#include <stdio.h>
int a(int *b);
int c(int *d);

int main()
{
    int x, y;

    printf("Input angka pertama : ");
    scanf("%d", &x);
    printf("Input angka kedua : ");
    scanf("%d", &y);

    printf("=========================================================\n");
    printf("Isi dari input 1 : %d(Sebelum swap)\nIsi dari input 2 : %d (Sebelum swap)\n", x, y);
    printf("=========================================================\n");
    printf("Isi dari input 1 : %d\nIsi dari input 2 : %d \n", a(&y), c(&x));
    printf("=========================================================\n");
    printf("Isi dari input 1 : %d(Swap Menggunakan Pointer)\nIsi dari input 2 : %d (Swap Menggunakan Pointer)\n", a(&y), c(&x));
    printf("=========================================================\n");


return 0;
}


int a(int *b)
{
    int hasil;
    hasil = *b;
return hasil;
}

int c(int *d)
{
    int hasil;
    hasil = *d;
return hasil;
}
