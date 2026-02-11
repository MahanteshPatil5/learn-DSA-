#include <stdio.h>
#include<stdlib.h>
struct node
{
  int key;
  struct node *next;  
};
struct node *head = NULL;

void insertF(){
    int value;
    printf("Enter the value to enter @ first of ll :: ");
    scanf("%d",&value);
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
    return;
}
}

void insertE()
{
    int value;
    printf("ENter the value to enter @ last of ll :: ");
    scanf("%d",&value);
    struct node *temp,*p;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->key = value;
    temp->next = NULL;
    p = head;
    if(head == NULL){
        head = temp;
        temp->next = NULL;
    }
    else{
        while(p->next != NULL){
            p = p->next; 
        }
        p-> next = temp;
    }
}

void delF(){
    struct node *temp;
    if(head == NULL){
        printf("There is no nodes in the LL ");
    }
    else{
        temp = head;
        head = head->next;
        printf("The deleted node is :: %d",temp->key);
        free(temp);
    }
}

void delE(){
    struct node *p,*c;
    if(head == NULL){
        printf("There is no nodes in the LL ");
    }
    else if(head->next == NULL){
        free(head);

    }
    else{
        c = head;
        while(c->next != NULL){
            p = c;
            c = c->next;
        }
        p->next = NULL;
        
        printf("The deleted node is :: %d",c->key);
        free(c);
    }
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
int main(){
    int ch;
    while(1){
        printf("\n1.Insert Front 2.Insert End 3.Delete Front 4.Delete End 5.display 6.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertF();
            break;
        case 2:
            insertE();
            break;
        case 3:
            delF();
            break;
        case 4:
            delE();
            break;
        case 5:
        disp();
        break;

        case 6:
        return 0;

        default:
        printf("\n Enter the proper choice : ");
            break;
        }
    }
    return 0;
}

// cheat
// cheat
// cheat
