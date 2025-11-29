#include<stdio.h>
int main(){
    int a=5; //0101 in binary
    int b=9; //1001 in binary
    printf("a&b =%d\n",a&b); //AND
    printf("a|b =%d\n",a|b); //OR
    printf("a^b =%d\n",a^b);// XOR
    printf("~a =%d\n",~a);  //NOT
    printf("b<<1 =%d\n",b<<1);//Left shift
    printf("b>>1 =%d\n",b>>1);//Right Shift
    return 0;
}