#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    int max = 0;

    do
    {
        scanf("%d", &input);
        if (input <= max)
            continue;
            
        max = input;
    } while (input != -1);

    printf("%d", max);

    return 0;
}
