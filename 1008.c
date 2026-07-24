#include <stdio.h>
int main ()
{
    int x,y;
    scanf ("%d %d",&x,&y);
    float z;
    scanf ("%f",&z);
    
    float m=y*z;
    
    printf ("NUMBER = %d\nSALARY = U$ %.2f\n",x,m);
    
    return 0;
}
