#include <stdio.h>
int main ()
{
    int x;
    scanf ("%d",&x);
    
    int m=x/3600;
    int n=x%3600;
    int o=n/60;
    int p=n%60;
    int q=p/1;
    
    printf ("%d:%d:%d\n",m,o,q);
    
    return 0;
}
