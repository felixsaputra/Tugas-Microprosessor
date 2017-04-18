#include <stdio.h>

int main()
{
int a, b, c, d, e, f;
int *p1, *p2, *p3, *p4;

printf("input : ");
scanf("%d", &a);
printf("masukkan nilai operasi : ");
scanf("%d", &b);

c=a+b;
d=a-b;
e=a*b;
f=a/b;

p1=&c;
p2=&d;
p3=&e;
p4=&f;

printf("hasil penjumlahan : %d\n", *p1);
printf("hasil pengurangan : %d\n", *p2);
printf("hasil perkalian : %d\n", *p3);
printf("hasil pembagian : %d\n", *p4);

return 0;

}
