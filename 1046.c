#include <stdio.h>
int main ()
{
    int x,y;
    scanf ("%d %d",&x,&y);
    
    if (x>=y)
    {
        int m = x-y;
        int n = 24 - m;
        printf ("O JOGO DUROU %d HORA(S)\n",n);
    }
    else 
    {
        int a = y-x;
        printf ("O JOGO DUROU %d HORA(S)\n",a);
    }
    
    
    return 0;
}
