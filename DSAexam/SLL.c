#include <stdio.h>

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

}
int main(){
    printf("Enter element to insert at front of SLL : ");
    scanf("%d",&value);
}