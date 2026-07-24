#include <stdio.h>
int main ()
{
    int x;
    scanf ("%d",&x);
    float y;
    scanf ("%f",&y);
    
    float m=x/y;
    
    printf ("%.3f km/l\n",m);
    
    return 0;
}
