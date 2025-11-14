#include<stdio.h>
int main() {
    float p, r, t, si;
    printf("enter principal, rate, time:");
    scanf("%f %f, &p, &r, &t");
    si=(p*t*r)/100;
    printf("simple interest = %.2f", si);
    return 0;
}