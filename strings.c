#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char str1[25] = "Nithin";
    printf("%lu\n", sizeof(str));
    printf("%s\n", str);

    printf("%lu\n", sizeof(str1));
    printf("%lu\n", strlen(str1));

    return 0;
}
