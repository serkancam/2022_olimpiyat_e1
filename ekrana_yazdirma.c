#include <stdio.h>

int main()
{
    
    int a=12,b=25;
    float c=30.5,d=42.8546;
    //a değeri = 12 ve b değeri=25 ikisinin toplamı=37
    printf("a değeri = %d ve b değeri=%d iksinin toplamı=%d\n",a,b,a+b);

    //a değeri b değerinden çıkarsa geriye 13 kalır. a değeri=12'dir.
    printf("a değeri b değerinden çıakrsa geriye %d kalır. a değeri=%d\n",b-a,a);

    //c değerinin iki fazlası 32.5'tir. d değeri=42.8546
    printf("c değerinin iki fazlası %f'tir. d değeri=%f\n",c+2,d);

    //a+b+c+d toplamları--> 12 + 25 + 30.5 + 42.8546=xx.xxx
    printf("a+b+c+d  toplamları--> %d + %d + %f + %f=%f",a,b,c,d,a+b+c+d);
    return 0;
}