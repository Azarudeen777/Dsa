#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *next;
    }*temp,*new,*top;
    push(){
    if(top==NULL){
        new=(struct node*)malloc(sizeof(struct node));
    }
    temp=(struct node*)malloc(sizeof(struct node));
      
        int ele;
        printf("enter the element=");
        scanf("%d",&ele);
        if(top==NULL)
        {
            new->data=ele;
            new->next=NULL;
            top=new;
            }
        else{
            new->data=ele;
            new->next=top;
            top=new;
        }
    }
    pop()
    {
        if(top==NULL){
            printf("stack is empty");
        }
        else{
            temp=top;
            printf("$d",temp->data);
            top=top->next;
            top->next=NULL;
        }
    }
    display(){
        if(top==NULL){
            printf("stack is empty");
        }
        else{
            temp=top;
            printf("stack is:");
            while(temp!=NULL)
            {
                printf("%d",temp->data);
                temp=temp->next;
            }
        }
    }
    int main(){
    push();
    display();
    pop();
}