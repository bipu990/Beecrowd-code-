#include <stdio.h>
int main ()
{
    int x;
    scanf ("%d",&x);
    printf ("%d\n",x);
    
    int m=x/100;
    printf ("%d nota(s) de R$ 100,00\n",m);
    int n=x%100;
    int a=n/50;
    printf ("%d nota(s) de R$ 50,00\n",a);
    int b=n%50;
    int c=b/20;
    printf ("%d nota(s) de R$ 20,00\n",c);
    int d=b%20;
    int e=d/10;
    printf ("%d nota(s) de R$ 10,00\n",e);
    int f=d%10;
    int g=f/5;
    printf ("%d nota(s) de R$ 5,00\n",g);
    int h=f%5;
    int i=h/2;
    printf ("%d nota(s) de R$ 2,00\n",i);
    int j=h%2;
    int k=j/1;
    printf ("%d nota(s) de R$ 1,00\n",k);
    
    return 0;
}
