#include<stdio.h>

void warsh(int p[][10],int n){
    for(int k=0;k<=n;k++){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                p[i][j] = p[i][j] || p[i][k]&&p[k][j];
            }
        }
    }
}

int main(){
    int n,p[10][10];
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("ENter the graph : ");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d",&p[i][j]);
        }
        
    }

    warsh(p,n);

    printf("shortest path : ");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf(" %d ",p[i][j]);
        }
        printf("\n");        
    }
    
    return 0;
}