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
    head = temp;
    return head;}
}
void disp(){
    struct node *temp;
    temp = head;
    if(head == NULL){
        printf("The head is empty  ");
    }
    
    else{
        while(temp != NULL){
            printf(" the %d ",temp->key);
            temp = temp->next;
        }
    }
}
void insertE()
{
    int value;
    printf("ENter the value to enter @ last of ll :: ");
    scanf("%d",&value);
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->key;
}
int main(){
    int ch;
    printf("\nEnter element to insert at front of SLL : ");
    scanf("%d",&value);
    while(1){
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertF(value);
            break;
        
        default:
            break;
        }
    }
    return 0;
}

// cheat
// cheat
// cheat
