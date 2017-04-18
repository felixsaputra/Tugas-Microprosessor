// Fa Destri Reynaldo 2015630018

#include <stdio.h> // header input output

int main () // main execution
{
int a, *b; // state declaration untuk *b merupakan pointer to integer

printf ("masukan nilai integer = \t"); // output to screen
scanf ("%d", &a); // input from keyboard

b=&a; // b merupakan alamat dari a

printf ("alamat dari input adalah %d \n", b); // output alamat b
printf ("isi dari input adalah %d \n", a); // output nilai a
printf ("hasil input yang ditunjuk alamat = %d \n",a); // output isi alamat a
printf ("nilai input = %d", a); // output hasil input a

return 0; // return value
}
