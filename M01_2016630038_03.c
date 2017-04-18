#include <stdio.h>

int main()
{
int a , b;
int *pointer;

pointer = &a;

printf("input ke-n : ");
scanf("%d" , &a);

printf("hasil dari input ke-n : %d\n", a);
printf("alamat dari input ke-n : %p\n", &a);
printf("hasil dari alamat dari input ke-n adalah : %d", a);

return 0;

}
