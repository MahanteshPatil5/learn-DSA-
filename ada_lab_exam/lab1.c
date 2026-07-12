#include<stdio.h>
#define max 100
#define inf 999

int p[max], c[max][max],t[max][2];

int find(int v){
    while(p[v]){
        v = p[v];
    }
}

void union1(int i,int j){
    p[j] = i; 
}

void krushkals(int n){
    int i,j,k,u,v,min,sum=0,res1,res2;

    for(k=1;k<n;k++){
        min = inf;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; i <= n; j++)
            {
                if(i==j){
                    continue;
                }
                if(c[i][j]<min){
                    u=find(i);
                    v=find(j);
                    if(u!=v){
                        res1 = i;
                        res2 = j;
                        min = c[i][j];
                    }
                }
            }
        }
        union1(res1,find(res2));
        t[k][1] = res1;
        t[k][2] = res2;
        sum = sum+min;
    }
        printf("the minimun cost to travel is %d ",sum);
        printf(" connected grph are :" );
        for (int i = 0; i < n; i++)
        {
            printf(" %d -> %d ", t[i][j);            
        }
        
}
int main(){
    printf("HEllo bro");
    return 0;
}
