#include <stdio.h>

int main()
{
    /*
    float -->4 byte
    double --> 8 byte
    long double --> 8-10 byte-->para işlerinde.
    */
   float kilo=82.5,boy=1.74;//%f
   float bki;
    //bki-->kiloyu boyun karesine bölümü --kilo kg, boy --> metre
    bki=kilo/(boy*boy);
    //bki değeriniz 25.4 tür
    printf("bki değeriniz %f tür",bki);

    return 0;
}