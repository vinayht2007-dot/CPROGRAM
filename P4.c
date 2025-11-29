#include<stdio.h>
#include<stdio.h>
struct book{
    int id;
    char title[50];
    char author[50];
};
int main(){
     struct book b1={101,"c programing","dennis ritchie"};
     struct book b2={102,"data strctures","mark weiss"};
     struct book b3={103,"operating systems","silberschatz"};
     struct book *books[3]={&b1,&b2,&b3};
     int searchID,i,found=0;
     printf("Enter book id to search:");
     scanf("%d",&searchID);
     for(i=0;i<3;i++){
        if(books[i]->id==searchID){
            printf("\nbook found:\n");
            printf("ID;%d\n",books[i]->id);
            printf("title:%s\n",books[i]->title);
            printf("author:%s\n",books[i]->author);
            found=1;
            break;
     
}
}