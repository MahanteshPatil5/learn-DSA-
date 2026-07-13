#include<stdio.h>
#define max 999
int min(int a,int b){
    return (a<b)?a:b;
}

void floyds(int p[][10], int n){
    for(int k=1;k<=n;k++){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                p[i][j] = min(p[i][j],p[i][k]+p[k][j]);
            }
        }
    }
}

int main(){
    int n,p[10][10];
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Enter the graph : ");
    for(int i=1;i<=n;i++){
        for (int j = 1; j <= n; j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    
    floyds(p,n);

    printf("Shortest path : ");
    for(int i=1;i<=n;i++){
        for (int j = 1; j <= n; j++)
        {
            printf(" %d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
