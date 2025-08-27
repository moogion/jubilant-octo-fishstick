#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    if (scanf("%d", &input) != 1)
    {
        printf("n/a");
        return 0;
    }

    int max = 0;
    do
    {
        int digit = input % 10;
        input /= 10;

        if (digit <= max)
            continue;
        max = digit;
    } while (input > 0);

    printf("%d", max);

    return 0;
}
