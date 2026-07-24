#include <stdio.h>
int main ()
{
    float x,y;
    scanf ("%f %f",&x,&y);
    
    double n=(x*y)/12;
    
    printf ("%.3lf\n",n);
    
    return 0;
}
