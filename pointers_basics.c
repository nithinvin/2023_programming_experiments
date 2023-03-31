#include <stdio.h>

int main()
{
    int testint = 306;
    int *intp = &testint;

    printf("testint = %d\n", testint);
    printf("testint = 0x%x\n", testint);
    printf("testint = %p\n", &testint);

    printf("testint = %d\n", *intp);
    printf("testint = %c\n", *intp + 1);

    return 0;
}
