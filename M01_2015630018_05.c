#include <stdio.h>
#include <math.h>
#define MAKS 4


int main ()
{
    int i;
    float total=0;
    float rata2;
    float nilai_test[MAKS];
    char nama [4];

    printf ("nama = \t");
    printf("\n");
    gets(nama);

    for (i=0;i<MAKS;i++)
    {
    printf ("nilai mata kuliah ke-%d = ", i+1);
    scanf ("%f", &nilai_test[i]);

    total=total+nilai_test[i];
    }

    rata2=total/MAKS;

    printf ("nama = %s \n", nama);
    printf ("nilai rata-rata = %g \n",rata2);

    if (rata2>80)
    {
    printf ("dapat nilai = A \n");
    }
    else if (rata2>70)
    {
    printf ("dapat nilai = B \n");
    }
    else if (rata2>60)
    {
    printf ("dapat nilai = C");
    }
    else if (rata2>50)
    {
    printf ("dapat nilai = D");
    }
    else
    {
    printf ("dapat nilai = E");
    }

return 0;
}

