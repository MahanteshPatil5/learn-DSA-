#include <stdio.h>
#include<stdlib.h>

int value; 

struct node
{
  int key;
  struct node *next;  
};
struct node *head = NULL;
void insertF(int value){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->key = value;
    if(head == NULL){
        head = temp;
        temp->next = NULL;
    }
    else{
    temp->next = head;
    return head;}
}
void disp(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    if(head == NULL){
        printf("The head is empty  ");
    }
    
    else{
        while(temp->next != NULL){
            printf(" the %d ",temp->key);
            temp = temp->key;
        }
    }
}
int main(){
    printf("\nEnter element to insert at front of SLL : ");
    scanf("%d",&value);
    while(1){
        insertF(value);
        disp();
    }
    return 0;
}

// cheat
// cheat