#include <stdio.h>
#define max 10
int q[max],front = -1,rear = -1;
void addq(){
    if(rear == max-1){
        printf("The is overflow");
    }
    else{
        int item;
        printf("Enter Elemets to be added to q : ");
        scanf("%d",item);
        rear++;
        q[rear] = item;
    }
}
void delq(){
    if(front == rear){
        printf("The is underflow");
    }
    else{
        int item;
        item = q[front];
        front++;
    }
}
void display(){
    printf("The Elements of the Q are : ");
    for(int i=front;i<rear;i++){
        printf(" %d ",q[i]);
    }
}
int main(){
    int ch=1;
    while(ch){
        printf("1.Add element 2.Del element 3.Display element ");
        printf("\nEnter the ur choice : ");
        
    }
}