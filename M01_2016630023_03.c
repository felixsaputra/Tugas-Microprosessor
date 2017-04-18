#include <stdio.h>

int main()
{
    int x,y;
    int arr[20];

    printf("masukan jumlah data yang akan dimasukan : ");
    scanf("%d",&y);

        for(x=0;x<y;x++){
    printf("\ninput ke -n : ",x);
    scanf("%d",&arr[x]);
    printf("hasil dari input ke-n adalah : %d\n",arr[x]);
    printf("alamat dari input ke n adalah : %p\n",arr[x]);
    printf("Hasil dari alamat input ke-n adalah : %d",arr[x]);


        }

return 0;

}
