#include<stdio.h>
int main()
{
    short int a = 32767;
    unsigned int b = 65535;
    long int c = 123456789;
    signed int d = -120;
    printf("short Int %d\n", a);
    printf("Unsigned Int: %u\n", b);
    printf("Long Int: %1d\n", c);
    printf("Signed Int: %d\n", d);
    return 0;
}