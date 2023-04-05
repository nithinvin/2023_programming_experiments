#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int array[4][5] = { {25, 35, 67, 78, 89}, {23, 24, 45, 65, 34}, {42, 543, 765, 534, 434}, { 4234, 232, 3231, 321, 2134214} };

    printf("array = %p\n", array);
    for (i = 0; i < 4; ++i)
    {
        printf("array[%d] = %p\n", i, array[i]);
        for (j = 0; j < 5; ++j)
        {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }
}
