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
int main(){
    printf("Enter element to insert at front of SLL : ");
    scanf("%d",&value);
    insertF(value);
}