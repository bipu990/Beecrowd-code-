#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    if (x<y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int m = 0;
    int n = y+1;
    for (int i=n;i<x;i++)
    {
        if (i%2!=0)
        {
            m = m+i;
        }
    }

    printf("%d\n",m);

    return  0;
}
