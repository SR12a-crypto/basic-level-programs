#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float mean;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    mean = (a + b + c + d + e) / 5.0;

    printf("Mean = %.2f\n", mean);

    if (a > mean)
        printf("%d is above the mean\n", a);
    else
        printf("%d is below the mean\n", a);

    if (b > mean)
        printf("%d is above the mean\n", b);
    else
        printf("%d is below the mean\n", b);

    if (c > mean)
        printf("%d is above the mean\n", c);
    else
        printf("%d is below the mean\n", c);

    if (d > mean)
        printf("%d is above the mean\n", d);
    else
        printf("%d is below the mean\n", d);

    if (e > mean)
        printf("%d is above the mean\n", e);
    else
        printf("%d is below the mean\n", e);

    return 0;
}
