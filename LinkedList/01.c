#include<stdio.h>

int val;

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;


void insertFront(val){
    struct node *new = (int*)malloc(sizeof(struct node)) ;

    new->data = val;
    new->next = head;
    head = new;
}

void display(){
    if(head == NULL){
        printf("the haed isnull so not able to display ");
        return;
    }
    else{
        while (head->next != NULL)
        {
            printf(" %d ",head->data);
            head = head->next;
        }
        
    }
}

int main(){
    printf("Enter the Element to enter to the LL : ");
    scanf("%d",&val);
    insertFront(val);
    display();
    printf("HELLO WORLD");
}