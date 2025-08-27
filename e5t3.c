#include <stdlib.h>
#include <stdio.h>

typedef struct IntArr
{
    int *values;
    int size;
    int capacity;
} IntArr;

void IntArr_init(IntArr *arr, int capacity)
{
    arr->size = 0;
    arr->capacity = capacity;
    arr->values = malloc(capacity * sizeof(int));
}

void IntArr_insert(IntArr *arr, int value)
{
    if (arr->size >= arr->capacity)
    {
        arr->capacity *= 2;
        arr->values = realloc(arr->values, arr->capacity * sizeof(int));
    }

    arr->values[arr->size++] = value;
}

void IntArr_free(IntArr *arr)
{
    free(arr->values);
    arr->size = arr->capacity = 0;
}

int main(int argc, char const *argv[])
{
    IntArr arr;
    IntArr_init(&arr, 8);

    int input;
    while (1)
    {
        if (scanf("%d", &input) != 1)
        {
            printf("n/a");
            return 0;
        }

        if (input == -1)
            break;

        IntArr_insert(&arr, input);
    }

    for (int i = 0; i < arr.size; i++)
    {
        int idx;
        if (i % 2 == 0)
        {
            idx = i / 2;
        }
        else
        {
            idx = arr.size - (i / 2) - 1;
        }

        printf("%d", arr.values[idx]);

        if (i + 1 >= arr.size)
            continue;
        printf(" ");
    }

    IntArr_free(&arr);

    return 0;
}
