#include <stdio.h>
void fungsi(int* array, int jumlah){
int a;
for(a=0; a<jumlah; a++)
{
    printf("hasil dari input ke %d adalah %d\n", a+1, array[a]);

    printf("alamat dari input ke %d adalah %d\n", a+1, &array[a]);

    printf("hasil dari alamat ke %d adalah %d\n", a+1, array[a]);
}

return;
}

int main()
{
int a, jumlah, array[100];

printf("jumlah angka yang di-input: ");
scanf("%d", &jumlah);

for(a=0; a<jumlah; a++)//loop untuk memasukan input ke n
{
    printf("input ke %d : ", a+1);
    scanf("%d", &array[a]);
}

fungsi(&array, jumlah);//memanggil fungsi

return 0;
}
