#include <stdio.h>
#include <math.h>

int main ()
{
    double a,b,c;
    scanf ("%lf %lf %lf",&a,&b,&c);
    
    double x = (b*b)-(4.0*a*c);
    if (x>0) // ai (condition makeing)
    {
        double m = pow(x,1.0/2);// ai (power)
        double n = (-b+m)/(2.0*a);// ai (mistake-2, but should 2.0 cause-dauble)
        printf ("R1 = %.5f\n",n);
        double o = (-b-m)/(2.0*a);
        printf ("R2 = %.5f\n",o);
    }
    else 
    {
        printf ("Impossivel calcular");
    }
    
    return 0;
} 
