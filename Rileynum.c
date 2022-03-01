#include <stdio.h>
void main()
{
    int n, r, m;

    printf("Enter an integer\n");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        m = r % 2;
        if (m != 0){
        printf("\n given number is not Riley number");
        break;}
        n = n / 10;
        if (n == 0)
            printf("\n given number is Riley number");
    }
}
