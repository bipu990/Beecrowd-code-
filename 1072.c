#include <stdio.h>
int main ()
{
    int x;
    scanf ("%d",&x);
    int arr[x];
    for (int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int in = 0;
    int out = 0;
    for (int i=0;i<x;i++)
    {
        if (arr[i]>=10 && arr[i]<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf ("%d in\n",in);
    printf ("%d out\n",out);

    return 0;
}
