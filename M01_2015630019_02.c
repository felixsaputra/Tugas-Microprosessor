#include <stdio.h>
#include <math.h>



int main ()

{
    int in1,in2,*a,*b,T;

    printf("Masukan Input1\n");
    scanf("%d",&in1);
    printf("Masukan Input1\n");
    scanf("%d",&in2);

    printf("Sebelum di Swap\nx=%d\ny=%d\n", in1,in2);

    a=&in1;
    b=&in2;
    T=*b;
    *b=*a;
    *a=T;

    printf("Setelah Swap \nx=%d\ny=%d\n", in1,in2);

    return 0;
}
