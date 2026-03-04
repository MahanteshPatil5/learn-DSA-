#include<stdio.h>
#include<stdlib.h>

int val;

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;


void insertFront(){
    struct node *new = (int*)malloc(sizeof(struct node)) ;
    
    printf("Enter the Element to enter to the LL : ");
    scanf("%d",&val);
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
    while(1){
        printf("1.Insert front 2.Display 3.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insertFront();
            break;
        
        case 2:
            display();
            break;

        case 3:
            exit(0);

        default:
            printf("Enter the proper number(int): ");
            break;
        }
        
    }
    // printf("HELLO WORLD");
}

// cheat
// cheat
