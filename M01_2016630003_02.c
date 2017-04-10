//NO 2

#include <stdio.h>

void tukar(int *q, int *w);
int main(){
    char a[100], b[100];

        printf("Masukan Input 1: ");
        scanf("%s", &a);
        printf("Masukan Input 2: ");
        scanf("%s", &b);

    printf("\nIsi dari Input 1 adalah %s dan Input 2 adalah %s. (Sebelum Swap)\n", a, b);
    printf("Isi dari Input 1 adalah %s dan Input 2 adalah %s.\n", b, a);

tukar(&a, &b);

    printf("\nIsi dari Input 1 adalah %s dan Input 2 adalah %s. (Setelah Swap)\n", a, b);

return 0;
}
void tukar(int *q, int *w){
    int c;
    c=*q;
    *q=*w;
    *w=c;
return;
}

