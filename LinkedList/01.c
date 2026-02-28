#include<stdio.h>
#include<stdlib.h>

int val;

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;


void insertFront(int val){
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
    int ch;
    printf("Enter the Element to enter to the LL : ");
    scanf("%d",&val);
    while(1){
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertFront(val);
            break;
        
        case 2:
            display();
            break;
        case 3:
            exit(1);

        default:
            break;
        }
        
    }
    // printf("HELLO WORLD");
}

// cheat