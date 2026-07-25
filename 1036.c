#include <stdio.h>
#include <math.h>

int main ()
{
    double a,b,c;
    scanf ("%lf %lf %lf",&a,&b,&c);
    
    double x = (b*b)-(4.0*a*c);
    if (x>=0 && a!=0)
    {
        double m = pow(x,1.0/2);
        double n = (-b+m)/(2.0*a);
        printf ("R1 = %.5f\n",n);
        double o = (-b-m)/(2.0*a);
        printf ("R2 = %.5f\n",o);
    }
    else 
    {
        printf ("Impossivel calcular\n");
    }
    
    return 0;
} 
