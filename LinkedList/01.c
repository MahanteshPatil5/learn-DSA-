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

void insertEnd(){
    struct node *new = (int*)malloc(sizeof(struct node)),*temp;
    
    printf("Enter the Element to enter to the LL : ");
    scanf("%d",&val);

    if(head == NULL){
        new->data = val;
        new->next = NULL;
        head->next = new;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new;
    }
}
void display(){
    struct node *temp = (int*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("the haed is null so not able to display ");
        return;
    }
    temp = head;
    while (temp->next != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
        
}

int main(){
    int ch;
    while(1){
        printf("\n1.Insert front 2.Insert End 3.Del front 4.Del end  5.Display 6.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insertFront();
            break;
        
        case 2:
            insertend();
            break;
            
        case 3:
            delfront();
            break;
        case 4:
            delend();
            break;
        case 5:
            display();
            break;
        case 6:
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
