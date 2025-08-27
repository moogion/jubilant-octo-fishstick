#include <stdio.h>

char input(int n, int arr[n])
{
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) == 1)
            continue;

        printf("n/a");
        return 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("n/a");
        return 0;
    }

    int vec1[n];
    if (!input(n, vec1))
    {
        printf("n/a");
        return 0;
    }

    int vec2[n];
    if (!input(n, vec2))
    {
        printf("n/a");
        return 0;
    }

    int prod = 0;
    for (int i = 0; i < n; i++)
    {
        prod += vec1[i] * vec2[i];
    }

    printf("%d", prod);

    return 0;
}
