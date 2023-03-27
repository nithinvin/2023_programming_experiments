#include <stdio.h>

int main()
{
    char mychar = 100;
    char mychar1 = 'm';
    signed char schar = -50;
    unsigned char uchar = 65;
    
    printf("%lu %lu %lu %lu\n", sizeof(mychar), sizeof(schar), sizeof(uchar), sizeof(mychar1));
    printf("%c %c %c %c\n", mychar, schar, uchar, mychar1);
    printf("%d %d %d %d\n", mychar, schar, uchar, mychar1);

    short short_int = -100;
    unsigned short ushort_int = -100;
    int plain_int;
    unsigned int uplain_int;
    long long_int;
    unsigned long ulong_int;
    long long long_long_int;
    unsigned long long ulong_long_int;

    printf("short = %lu unsigned short = %lu\n", sizeof(short_int), sizeof(ushort_int));
    printf("int = %lu unsigned int = %lu\n", sizeof(plain_int), sizeof(uplain_int));
    printf("long = %lu unsigned long = %lu\n", sizeof(long_int), sizeof(ulong_int));
    printf("long long = %lu unsigned long long = %lu\n", sizeof(long_long_int), sizeof(ulong_long_int));

    printf("short_value = %d unsigned short_value = %d\n", short_int, ushort_int);

    return 0;
}


