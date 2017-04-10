#include <stdio.h>
#include <math.h>
#define max 4

int main ()
    {
    int a;
    char nama[10];
    float tot=0;
    float rata;
    float nilai[max];

        printf("masukkan nama mahasiswa : ");
        scanf("%s",&nama);
            printf("masukkan jumlah nilai yang mau diinput : ");
            scanf("%d",&a);
            for(a=0;a<max;a++)
                {
                printf("masukkan nilai ke-%d : ",a+1);
                scanf("%f",&nilai[a]);

                    tot=tot+nilai[a];
                }
                rata=tot/max;

if(rata>80)
    {
    printf("%s lulus dengan nilai A");
    }
else if(rata>70)
    {
    printf("%s lulus dengan nilai B");
    }
else if(rata>60)
    {
    printf("%s lulus dengan nilai C");
    }
else if(rata>60)
    {
    printf("%s lulus dengan nilai D");
    }
else
    {
    printf("%s tidak lulus (E)");
    }
                return 0;
    }
