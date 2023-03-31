#include <stdio.h>

int main()
{
    int marks[3];
    int total_marks[10] = {200, 210, 230, 240, 250, 240, 220};
    unsigned int i = 0;

    marks[0] = 300;
    marks[1] = 400;
    marks[2] = 450;
 
    printf("%d, %d, %d, %d\n", marks[0], marks[1], marks[2], marks[3]);

    for(i = 0; i < 10; i++)
    {
        printf("%d", total_marks[i]);
        printf(", Address is %p\n", &total_marks[i]);
    }
    printf("Sizeof array %lu\n", sizeof(total_marks));

    return 0;

}
