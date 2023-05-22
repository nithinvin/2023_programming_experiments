#include <stdio.h>

int strStr(char * haystack, char * needle)
{
    int need_t = 0;
    int index_t = 0;
    int hay_t = 0;

    while (haystack[hay_t] != '\0')
    {
        hay_t = index_t;
        need_t = 0;
        while ((needle[need_t] != '\0') && (needle[need_t] == haystack[hay_t]))
        {
            ++hay_t;
            ++need_t;
        }
        if (needle[need_t] == '\0')
        {
            return index_t;
        }
        else
        {
            ++index_t;
        }
    }
    return -1;
}

int main()
{
    printf("Index is %d\n", strStr("butsadbutsad", "sad"));
    printf("Index is %d\n", strStr("satbutsad", "sad"));
    printf("Index is %d\n", strStr("sadbutsad", "sad"));
    printf("Index is %d\n", strStr("ssadbutsad", "sad"));
}
