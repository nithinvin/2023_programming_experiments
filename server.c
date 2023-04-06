#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *string_space = NULL;
    char string_space1[1024];

    while(1)
    {
        string_space = malloc(1024);
        scanf("%s", string_space);
        printf("%s\n", string_space);
        free(string_space);
        sleep(1);
    }
}
