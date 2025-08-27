#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    if (scanf("%d", &input) != 1)
    {
        printf("n/a");
        return 0;
    }

    int prod = 0;
    do
    {
        int digit = input % 10;
        input /= 10;

        if (digit % 2 == 0) continue;
        prod = (prod > 0 ? prod : 1) * digit;
    } while (input != 0);

    printf("%d", prod);

    return 0;
}
