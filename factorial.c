#include <stdio.h>
void main()
{
    int n, f = 1;
    printf("Enter any number:\t");
    scanf("%d", &n);
start:
    f = f * n;
    n--;
    if (n > 0)
        goto start;
    printf("the factorial is %d", f);
}