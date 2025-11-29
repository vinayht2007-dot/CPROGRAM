#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int count=sizeo(arr)/ sizeof(arr[0]);
    printf("Total number of elements in the arry=%d\n",count);
    return 0;
}