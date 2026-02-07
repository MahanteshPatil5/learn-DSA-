#include<stdio.h>
#define max 10
int top = -1,stac[max];
int push(){
    int item;
    printf("Enter the item :: ");
    scanf("%d",&item);
    stac[top++] = item;
}

int main(){
    int n;
    printf("Enter the number of elemsts of stack : ");
    scanf("%d",&n);
    printf("Enter the elements of stack max 10: ");
    for(int i=0;i<n;i++){
        scanf("%d",&stac[i]);
    }
    int ch=1;
    while(ch){
        printf(" 1.Insert \t 2.Pop \t 3.Display ");
        printf("Enter your choice :: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;

        default:
            break;
        }
    }
    
}