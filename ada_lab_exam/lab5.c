#include<stdio.h>
int temp[10],k=0;
void sort(int a[][10],int id[],int n){
    for(int i=1;i<=n;i++){
        if(id[i]==0){
            id[i]=-1;
            temp[++k]=i;

            for(int j=1;j<=n;j++){
                if(a[i][j]==1 && id[j]!=-1){
                    id[j]--;
                }
            }
            i=0;
        }
    }
}

int main(){
    int n,a[10][10],id[10];
    printf("Topological sorting : ");
    printf("ENter the n value : ");
    scanf("%d",&n);

    for(int k=1;k<=n;k++){
        id[k]=0;
    }
    printf("ENter the graph data : ");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                id[j]++;
            }
        }
    }

    sort(a,id,n);
    printf("the topological sorting is: ");
    
    for(int i=1;i<=n;i++){
            printf(" %d ",temp[i]);
        }
}