#include <stdio.h>
int main()
{
    int a=0, b=1;
    short s1=16;
    int c = 5;
    a=a+1;
    b=3+8/3;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", s1);
    {
        printf("a=%d\n",a);
        int a=5;
        printf("a=%d\n",a);
        int d=10;
    }
  //  printf("d=%d",d);
    printf("a=%d\n",a);
    return 0;
}