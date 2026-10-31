#include <stdio.h>
int main()
{
    int a = 0,b = 1,c ,i;
    i = 1;
    printf("%d %d", a,b);
    do
    {
        c = a+b;
        i++;
        printf("%3d",c);
        a = b;
        b = c;
    }
    while (i <= 10);

    return 0;
}
