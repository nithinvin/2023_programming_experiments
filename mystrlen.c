#include <stdio.h>
#include <string.h>

unsigned long mystrlen(char *teststr)
{
    int i;
    for(i = 0; teststr[i]; ++i)
        ;
         
    return i;
}

int main()
{
    char str[25] = "Nithin";

    printf("%lu\n", mystrlen(str));

    return 0;
}
