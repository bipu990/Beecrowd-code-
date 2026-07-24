#include <stdio.h>
int main ()
{
    int x,y,z;
    scanf ("%d %d %d",&x,&y,&z);
    
    int m=0;
    
    if (m<=x)
    {
        m=x;
    }
    if (m<=y)
    {
        m=y;
    }
    if (m<=z) 
    {
        m=z;
    }
    
    printf ("%d eh o maior\n",m);
    
    return 0;
}
