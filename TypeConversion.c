#include <stdio.h>

int main()
{
    int i = 1;  // Start from 1 as the smallest positive integer
    int j;

    while (1)  // Infinite loop, will break when the condition is met
    {
        j = (int)(float)i;

        if (i != j)
        {
            // Found the smallest i such that i != j
            break;
        }

        i++;
    }

    printf("i=%d\nj=%d\n", i, j);

    return 0;
}
