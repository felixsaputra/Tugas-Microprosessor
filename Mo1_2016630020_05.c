#include <stdio.h>

char index(int* y,int x)
{
int k;
float NR;
int l=0;
for(k=0;k<x;k++)
{
l=l+y[k];
}
NR = l/x;
printf("%f",NR);
if (NR>=80)
    return 'A';
else if (70<=NR && NR <80)
    return 'B';
else if (49<=NR && NR <70)
    return 'c';
else if (NR<49)
    return 'D';
else
    return 'E';

}
int main ()
{
char n[10],nilai;
int x,j,y[10];

printf(" Nama mahasiswa : ");
scanf("%s",&n[10]);
printf(" Banyak mata kuliah : ");
scanf("%d",&x);

for (j=0;j<x;j++)
{
printf(" Nilai ke-%d mahasiswa : ",j+1);
scanf("%d",&y[j]);
}
//nilai = index(y,x);
printf(" %s lulus dengan nilai %c ",n[10],nilai);

return 0;
}
















