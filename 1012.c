#include <stdio.h>

int main ()
{
    double x,y,z;
    scanf ("%lf %lf %lf",&x,&y,&z);
    double pi = 3.14159;
    
    double tri=(1.0/2)*(x*z);
    double cir=pi*(z*z);
    double tra=(1.0/2)*(x+y)*z;
    double qua=y*y;
    double ret=x*y;
    
    printf ("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,qua,ret);
    
    return 0;
}
