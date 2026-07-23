#include <stdio.h>
int main ()
{
    double  x,y;
    scanf ("%lf %lf",&x,&y);
    
     if (x>=0 && x<=10 && y>=0 && y<=10)
     {
          double m=(x*3.5+y*7.5)/(3.5+7.5);
          printf ("MEDIA = %.5lf\n",m);
     }
    
    return 0;
}
