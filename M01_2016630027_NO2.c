#include <stdio.h>
int swap1 (int *b);
int swap2 (int *a);
int main (){

int a,b;

    printf("Input 1(Angka/Huruf)= ");
    scanf("%d", &a);

    printf("Input 2(Angka/Huruf)= ");
    scanf("%d", &b);

    printf("Isi dari input 1 adalah %d dan input 2 adalah %d(Sebelum swap),,");
    printf("Isi dari input 1 adalah %d dan input 2 adalah %d", swap1(&b), swap2(&a));
    printf("Isi dari input 1 adalah %d dan input 2 adalah %d(Setelah swap)", swap1(&b), swap2(&a));



return 0;
}
 int swap1(int *b){
    int nilai;
    nilai = *b;
    return nilai;
    }


    int swap2(int *a){
    int nilai;
    nilai = *a;
    return nilai;
    }
