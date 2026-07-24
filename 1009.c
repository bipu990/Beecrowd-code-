#include <stdio.h>
int main ()
{
    char name[30];
    scanf ("%s",&name);
    double x,y;
    scanf ("%lf %lf",&x,&y);
    
    double m=y*(15.0/100.0);
    double n=x+m;
    
    printf ("TOTAL = R$ %.2lf\n",n);
    
    return 0;
}
