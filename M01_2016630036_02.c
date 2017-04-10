#include<stdio.h>

int swap1(int *input2);
int swap2(int *input1);
int main (){
int input, inputy;
printf("Input 1(angka / huruf) = ");
scanf("%d", &input);


printf("Input 2(angka / huruf) = ");
scanf("%d", &inputy);


printf("Isi dari input 1 adalah %d dan Input 2 adalah %d(sebelum swap)\n",input,inputy);
printf("Isi dari input 1 adalah %d dan Input 2 adalah %d\n",swap1(&inputy),swap2(&input));
printf("Isi dari input 1 adalah %d dan Input 2 adalah %d (setelah swap)\n",swap1(&inputy),swap2(&input));

return 0;
}

int swap1(int *input2){
int nilai;
nilai = *input2;
return nilai;
}

int swap2(int *input1){
int nilai;
nilai = *input1;
return nilai;
}
