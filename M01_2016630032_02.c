#include <stdio.h>

int swap(int* place1, int* place2, int locker);
int main()
{
    int temp1;
    int temp2;
    int locker;

    printf("Input 1 = ");
    scanf("%d", &temp1);

    printf("Input 2 = ");
    scanf("%d", &temp2);

    printf("Isi Dari Input 1 adalah %d dan Input 2 adalah %d (Sebelum Swap)\n", temp1, temp2 );
    swap(&temp1, &temp2, locker);
    printf("Isi Dari Input 1 adalah %d dan Input 2 adalah %d\n", temp1, temp2 );
    printf("Isi Dari Input 1 adalah %d dan Input 2 adalah %d (Swap Menggunakan Pointer)\n", temp1, temp2);

}

int swap(int* place1, int* place2, int locker)
{
    locker=*place1;
    *place1=*place2;
    *place2=locker;

    return swap;
}
