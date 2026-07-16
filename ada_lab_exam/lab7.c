#include<stdio.h>
#define max 100
int p[max],w[max],m,x[max];
int i,n,m,j;

void greedyKNAP(int n,int w[], int p[],int m){
    double ratio[max];
    for(int i=0;i<n;i++)
        {ratio[i]= p[i]/w[i];}
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            double temp1 = ratio[i];
            ratio[i] = ratio[j];
            ratio[j] = temp1;

            int temp2 = w[i];
            w[i] = w[j];
            w[j] = temp2;

            temp2 = p[i];
            p[i] = p[j];
            p[j] = temp2;
        }      
    }

    int currentWeight = 0;
    float maxprofit = 0.0;
    
    for(int i=0;i<n;i++){
        if(currentWeight+w[i] <= m){
            x[i] = 1;
            currentWeight += w[i];
            maxprofit += p[i];
        }
        else{
            x[i] = (m-currentWeight)/(double)w[i];
            maxprofit += x[i]*p[i];
            break; 
        }
    }

    printf("The optimal solution is :: %d",maxprofit);
    printf("The solution vector : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",x[i]);
    }
}

int main(){
    printf("Enter the n value : ");
    scanf("%d",&n);

    printf("Enter the weight and profit of itmes : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d",&w[i],&p[i]);
    }
    printf("Enter the capacity of knapsack ");
    scanf("%d",&m);

    greedyKNAP(n,w,p,m);
    return 0;
}