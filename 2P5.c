#include<stdatomic.h>
#include<stdatomic.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int value){
    if(top==SIZE-1)
    printf("stack overflow! cannot push %d\n",value);
    else{
        stack[++top]=value;
        printf("%d pushed to stack\n",value);
    }
}
void pop() {
    if(top==-1)
    printf("stack underflow! no element to pop\n");
    else {
         int value=stack[top--];
        printf("%d popped from stack\n", value);


}