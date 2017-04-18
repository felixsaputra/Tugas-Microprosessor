#include<stdio.h>
int penjumlahan(int n)
{

return n+1;

}

int pengurangan(int n)
{

return n-1;
}

int perkalian(int n)
{

return n*1;
}

int pembagian(int n)
{

return n/1;
}

int main()
{
    int n,hasil,j,h,k,l;

    printf("input : ");
    scanf("%d",&n);


    l=penjumlahan(n);
     k=pengurangan(n);
 j=perkalian(n);
  h=pembagian(n);

    printf("hasil penjumlahan\t: %d\n",l);
    printf("hasil pengurangan\t: %d\n",k);
    printf("hasil perkalian\t\t: %d\n",j);
    printf("hasil pembagian\t\t: %d\n",h);

    return 0;
}
