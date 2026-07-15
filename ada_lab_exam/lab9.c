#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>

void slections_sort(int arr[],int n){
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {   
        min_idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void generateRandom(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i] = rand()%10000;
    }
}

int main(){
    int n;
    printf("Enter the number of elements of array = ");
    scanf("%d",&n);

    if(n<=5000){
        printf("Enter the n value greater then 5000;");
        return 1;
    }

    int *arr = (int*) malloc(n* sizeof(int));

    if(arr==NULL){
        printf("the array allocation failed :");
        return 1;
    }

    generateRandom(arr,n);

    clock_t start = clock();
    slections_sort(arr,n);
    clock_t end = clock();

    double time_taken = ((double)(end - start))/ CLOCKS_PER_SEC;

    printf("THE TIME TAKEN FOR %d to %f",n,time_taken);
    
    return 0;
}
