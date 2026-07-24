#include <stdio.h>
int main ()
{
    double  x,y,z;
    scanf ("%lf %lf %lf",&x,&y,&z);
    
     if (x>=0 && x<=10 && y>=0 && y<=10)
     {
          double m=(x*2+y*3+z*5)/(2+3+5);
          printf ("MEDIA = %.1lf\n",m);
     }
    
    return 0;
}
