#include<stdio.h>
int array[50];
float ratarata;

float NR (int *banyak1);

int main  (){
char nama[50];
int banyak;
printf("Nama mahasiswa: ");
scanf("%s", &nama);

printf("Banyak mata kuliah: ");
scanf("%d", &banyak);

if (NR(&banyak) > 80){
    printf("%s Lulus dengan nilai A\n", &nama);
}
else if (NR(&banyak) > 70){
    printf("%s Lulus dengan nilai B\n", &nama);
}
else if (NR(&banyak) > 60){
    printf("%s Lulus dengan nilai C\n", &nama);
}
else if (NR(&banyak) > 50){
    printf("%s Lulus dengan nilai D\n", &nama);
}
else {
    printf("%s Lulus dengan nilai E\n", &nama);
}


return 0;
}
float NR (int *banyak1){
int i;

for (i = 0;i<*banyak1;i++){
printf("Masukkan data: ");
scanf("%d", &array[i]);
}
ratarata= ratarata + array[i];
ratarata = ratarata/ *banyak1;
return ratarata;
}
