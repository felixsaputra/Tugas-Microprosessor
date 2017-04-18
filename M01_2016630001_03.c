#include<stdio.h>

int main()
{
int n,m,v[m] ;

printf("input banyak data : ");
scanf("%d",&n);
printf("\n");
for(m=0;m<n;m++){
printf("\nhasil dari input ke-%d adalah ",m+1);
scanf("%d",&v[m]);
}
printf("\n\n");

for(m=0;m<n;m++){
printf("hasil dari input ke %d adalah %d\n",m+1,v[m]);
printf("alamat dari input ke %d adalah %d",m+1,&v[m]);
printf("\nhasil dari alamat dari input ke %d adalah %d\n\n",m+1,v[m]);
}
return 0;
}
