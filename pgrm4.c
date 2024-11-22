#include <stdio.h>
#include <stdlib.h>
#define sz 5
void push(int s[sz],int *r,int *count,int item){
    if(*count==sz){
        printf("\nQueue overflow");
        return;
    }
    *r=(*r+1)%sz;
    s[*r]=item;
    *count+=1;
}
void pop(int s[sz],int *f,int *count){
    if(*count==0){
        printf("\n Queue underflow");
        return;
    }
    printf("\n %d is deleted from Queue",s[*f]);
    *f=(*f+1)%sz;
    *count-=1;
}
void display(int s[sz],int f,int count){
    if(count==0){
        printf("\n Empty Queue ");
        return;
    }
    
    printf("\n contents of Queue:\n");
    for(int i=1;i<=count;i++){
    printf("%d\t\t",s[f]);
    f=(f+1)%sz;
}
}
void main(){
    int s[sz],f=0,r=-1,item,ch,count=0;
    while(1){
        printf("\n1:insert 2:delete 3:display 0:Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the value to insert:");
                   scanf("%d",&item);
                   push(s,&r,&count,item);
                   break;
            case 2:pop(s,&f,&count);
                   break;
            case 3:display(s,f,count);
                   break;
            default:exit(0);
        }
    }
}