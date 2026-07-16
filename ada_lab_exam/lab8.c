#include<stdio.h>
#define max 100

int s[max],x[max],d;

void sumsubset(int p,int k,int r){
    int i;
    x[k] = 1;
    if((p+s[k])==d){
        for(int i=1;i<=k;i++){
            if(x[i]==1){
                printf(" %d ",s[i]);
            }
        }
        printf("\n");
    }
    else if(p+s[k]+s[k+1]<=d){
        sumsubset(p+s[k],k+1,r-s[k]);
    }

    if(p+r-s[k]>=d && p+s[k+1]<=d){
        x[k] = 0;
        sumsubset(p,k+1,r-s[k]);
    }

}
int main(){
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("ENter the array : ");
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
    }
    printf("Enter target value : ");
    scanf("%d",&d);

    for(int i=1;i<=n;i++){
        sum = sum+s[i];
    }

    if(sum<d || s[1]>d){
        printf("No subset present::");
    }
    else{
        sumsubset(0,1,sum);
    }
    
    return 0;
}