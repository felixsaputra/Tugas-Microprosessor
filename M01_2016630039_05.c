#include <stdio.h>

int main()
{
int a,b,c,d,n;
char nama [100];

printf("masukkan nama mahasiswa:");
scanf("%s",&nama);


printf("banyak mata kuliah :");
scanf("%d",&n);
for(a=1;a<=n;a++){
printf("nilai ke-%d mahasiswa:",a);
scanf("%d",&b);
}
return 0;}

