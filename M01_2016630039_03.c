#include <stdio.h>

struct var {
int x;
};
int main()
{
int a,b,n, c=1;
struct var f[15];
printf("masukkan data ke-n :");
scanf("%d",&n);
for(a=1;a<=n;a++){
printf("input ke-%d :",a);
scanf("%d",&f[c].x);
c++;
}

for(b=1;b<=c-1;b++){
printf("\nhasil dari input ke-%d adalah %d\n", b, f[b].x);
printf("\nalamat dari input ke-%d adalah %p\n",b, f[b].x);
printf("\nhasil dari alamat dari input ke-%d adalah %d\n", b, f[b].x);
}
return 0;
}

