#include <stdio.h>

int base2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0 && n > 0)
    {
        return base2(n / 2);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("enter integer: \n");
    scanf("%d", &n);

    if (base2(n))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
