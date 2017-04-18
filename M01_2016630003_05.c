//NO 5
#include <stdio.h>

int averageNilai(int MatKul, int nilai[1000]);
void print(char *nama, int av);

int main(void){

    char nama[100], A;
    int MatKul, nilai[1000], x, av;

printf("Nama Mahasiswa: ");
scanf("%s", &nama);
printf("Banyak mata kuliah: ");
scanf("%d", &MatKul);

        for(x=0;x<MatKul;x++){
        printf("Nilai ke-%d: ",x+1);
        scanf("%d", &nilai[x]);
        }

av=averageNilai(MatKul, &nilai);
print(&nama, av);

return 0;
}

int averageNilai(int MatKul, int *nilai){
    int c, sum=0, average;
    for(c=0;c<MatKul;c++){
        sum=sum+nilai[c];
        }
    average = sum/MatKul;

return average;
}

void print(char *nama, int av){
    if(av>=80){
    printf("\n%s LULUS dengan nilai A!\n", nama);
    }
        else if(av>=70 && av<80){
        printf("\n%s LULUS dengan nilai B!\n", nama);
        }
            else if(av>=49 && av<70){
            printf("\n%s LULUS dengan nilai C!\n", nama);
            }
                else if(av<49){
                printf("\n%s TIDAK LULUS dengan nilai D!\n", nama);
                }
return;
}


