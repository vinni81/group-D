#include <stdio.h>
int count_binunit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + count_binunit(n / 2);
    }
}

int main()
{
    int n;
    printf("enter integer: \n");
    scanf("%d", &n);
    printf("%d\n", count_binunit(n));
    return 0;
}
