#include <stdio.h>

int product(int num1, int num2)
{
    return num1 * num2;
}

void print_something()
{
    printf("Printing something\n");

    return;
}

int print_hello()
{
    int my_ret_value;
    print_something();
    printf("%d\n", my_ret_value);
    printf("Hello World!\n");
    return 20;
}

int main() {
    int ret_value = print_hello();

    printf("%d\n", ret_value);
    printf("Product of %d and %d is %d\n", 10, 20, product(10, 20));
    printf("Product of %d and %d is %d\n", 15, 20, product(15, 30));

    return 0;
}
