#include <stdio.h>

int counting()
{
    char lett = getchar();

    if (lett == '.')
    {
        return 0;
    }
    else
    {
        int rez = (lett == 'a') ? 1 : 0;
        return rez + counting();
    }
}

int main()
{
    int rez = counting();
    printf("quantity letter 'a': %d\n", rez);
    return 0;
}
