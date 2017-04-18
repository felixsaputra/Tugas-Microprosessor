//NO 3

#include <stdio.h>

void print(int* x, int jumlah){
    int c;
    for(c=0;c<jumlah;c++){
        printf("\nHasil dari Input ke-%d adalah %d\n",c+1,x[c]);
        printf("Alamat dari Input ke-%d adalah %d\n",c+1,&x[c]);
        printf("Hasil dari Alamat Input ke-%d adalah %d\n",c+1,x[c]);
    }

return;
}

int main(){

int x[100], jumlah, a;

    printf("Jumlah data yang dimasukan: ");
    scanf("%d", &jumlah);

    for(a=0;a<jumlah;a++){
        printf("Input ke-%d: ",a+1);
        scanf("%d", &x[a]);
    }
print(&x, jumlah);

return 0;
}
