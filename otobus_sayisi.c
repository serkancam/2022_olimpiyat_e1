#include <stdio.h>

int main()
{

    int kisi_sayisi = 366, arac_kapasitesi = 50, adet, kalan;
    adet = kisi_sayisi / arac_kapasitesi;
    kalan = kisi_sayisi % arac_kapasitesi;

    if (kalan > 0)
        adet += 1; //adet=adet+1;//

    printf("bizi %d adet araç lazım", adet);

    return 0;
}