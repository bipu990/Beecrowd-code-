
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int y = 2;

    while (y <= x)
    {
        printf("%d^2 = %d\n", y, y * y);
        y = y + 2;
    }

    return 0;
}
