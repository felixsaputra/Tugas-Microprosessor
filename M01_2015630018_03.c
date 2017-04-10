// Fa Destri Reynaldo 2015630018

#include <stdio.h> // header input output

int main () // main execution
{
int input_1, input_2; // state declaration integer
int *a, *b; // state declaration pointer to integer
int temp; // state declaration integer

printf ("masukan input 1= \t");
scanf ("%d", &input_1);

printf ("masukan input 2= \t");
scanf ("%d", &input_2);

printf ("sebelum swap \n x=%d \n y=%d \n", input_1, input_2); // output sebelum swap

a=&input_1; // a merupakan alamat dari input 1
b=&input_2; // b merupakan alamat dari input 2
temp=*b; // temp merupakan pointer dari b
b=*a; //b merupakan pointer dari a
a= temp; // a sama dengan temp

printf ("stelah swap dengan pointer \n x=%d \n y=%d", input_2, input_1); // output setelah swap

return 0; //return value
}
