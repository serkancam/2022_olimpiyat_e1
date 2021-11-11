#include <stdio.h>

int main()
{
    /**
     1- bir işlem gurubunda işleme float bir değer gelirse sonuç float çıkar.
     2- bir tamsayı değişkenine değer aktarılırken değerin sadece tam sayı kısmı aktarılır.
     3- Ondalıklık sayıya ondalıklı sayı aktarılırsa değeri ondalıklı bir değer olur.
     4- ekrana bir ondalıklı sayı %d ile yazdırılırsa sonuç rastgele bir tam sayı çıkar.
    */
    float fa=3,fb=4.1;
    int ia=30,ib=40;
    
    printf("fa=%f\n",fa);
    printf("fb=%f\n",fb);

    ia=3/2;
    fa=3/2;
    printf("ia=%d\n",ia);
    printf("fa=%f\n",fa);
    ib=3/2.0;
    printf("ib=%d\n",ib);
    fb=3/0.5;
    printf("fb=%f\n",fb);


    

    return 0;
}