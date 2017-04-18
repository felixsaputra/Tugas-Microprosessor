//No 4

#include <stdio.h>

float jumlah (float input, float x);
float kurang (float input, float x);
float kali (float input, float x);
float bagi (float input, float x);

int main(){
    float input, x, hasil;

    printf("Input: ");
    scanf("%f", &input);
    printf("Faktor operasi: ");
    scanf("%f", &x);

    hasil = jumlah(input, x);
    printf("\nHasil penjumlahan: %.2f\n", hasil);

    hasil = kurang(input, x);
    printf("\nHasil pengurangan: %.2f\n", hasil);

    hasil = kali(input, x);
    printf("\nHasil perkalian: %.2f\n", hasil);

    hasil = bagi(input, x);
    printf("\nHasil pembagian: %.2f\n", hasil);

return 0;
}

float jumlah (float input, float x){
float hasil;
hasil=input+x;
return hasil;
}

    float kurang (float input, float x){
    float hasil;
    hasil=input-x;
    return hasil;
    }

        float kali (float input, float x){
        float hasil;
        hasil=input*x;
        return hasil;
        }

            float bagi (float input, float x){
            float hasil;
            hasil=input/x;
            return hasil;
            }
