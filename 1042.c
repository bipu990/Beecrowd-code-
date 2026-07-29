#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int smallest, mid, largest;

    if (x < y && x < z) {
        smallest = x;
        if (y < z) { mid = y; largest = z; }
        else       { mid = z; largest = y; }
    }
    else if (y < x && y < z) {
        smallest = y;
        if (x < z) { mid = x; largest = z; }
        else       { mid = z; largest = x; }
    }
    else {
        smallest = z;
        if (y < x) { mid = y; largest = x; }
        else       { mid = x; largest = y; }
    }

    printf("%d\n%d\n%d\n\n", smallest, mid, largest);
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
