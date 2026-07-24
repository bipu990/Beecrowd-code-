#include <stdio.h>
int main ()
{
    double R;
    scanf ("%lf",&R);
    double pi=3.14159;
    
    double m=(4.0/3.0) * pi * R*R*R ;
    
    printf ("VOLUME = %.3lf\n",m);
    
    return 0;
}
