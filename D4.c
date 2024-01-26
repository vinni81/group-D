#include <stdio.h>
#include <limits.h>

void digitsreverse(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
    }
    else
    {
        printf("%d ", n % 10);
        digitsreverse(n / 10);
    }
}

int main()
{
    int number;
    printf("Enter positiv number \n");
    if (scanf("%d", &number) != 1 || number > INT_MAX || number < 0)
    {
        printf("entered incorrect number, negativ number or exeed INT TYPE LIMIT %d.\n", INT_MAX);
        return 1;
    }
    digitsreverse(number);
    //return 0;
}
