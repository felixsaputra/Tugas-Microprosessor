#include <stdio.h>

int main()
{
    int ttl;
    int lrk[1];

    for (ttl=0;ttl<1;ttl++)
    {
        printf("INPUT KE-%d :", ttl+1);
        scanf("%d", &lrk+ttl);

        printf("\nANSWER :");
        printf("\n\nHASIL DARI INPUT KE-%d adalah: %d", ttl+1, lrk[ttl]);
        printf("\n\nALAMAT DARI INPUT KE-%d adalah: %d", ttl+1, lrk+ttl);
        printf("\n\nHASIL DARI ALAMAT INPUT KE-%d adalah: %d", ttl+1, *(lrk));

        printf("\n\n\nTEKAN ENTER UNTUK MENGAKHIRI PROGRAM");
    }

}
