#include <stdio.h>

int main()
{
    int myint = 10;
    long double mydouble = 66.12345678;
    unsigned int uint = -70;
    char uchar = -70;
    char mychar = 'A';
    char *mystring = "Hello";

    printf("Hello World\n");    
    printf("Decimal 65, 65\n");
    printf("Decimal %d, %f, %c, %Lf\n", myint, (float)mydouble, myint, mydouble);

    printf("Unsigned %u\n", uint);
    printf("Unsigned %u, %d\n", uchar, uchar);

    printf("Myhex %x, Myoctal %o\n", myint, myint);

    printf("Mystring %s\n", mystring);
    printf("Mystring %p\n", mystring);
    printf("Mystring %c", *mystring);
    printf("%c", *(mystring + 1));
    printf("%c", *(mystring + 2));
    printf("%c", *(mystring + 3));
    printf("%c", *(mystring + 4));
    printf("%c\n", *(mystring + 5));

    printf("Address of myint %p\n", &myint);

    return 0;
}
