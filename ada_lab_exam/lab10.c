#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low,int high){
    int i,j,k;
    int pivot = arr[high];
    i = low-1;
    for(j=low;j<(high-1);j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i],&arr[high]);
    return(i+1);
}


void quicksort(int arr[], int low, int high){
    if(low<=high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

void generaterandom(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i] = rand()%10000;
    }
}

int main(){
    int n;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    if(n<5000){
        printf("Enter the value greater then 5000");
        return 1;
    }

    int *arr = (int*)malloc(n*sizeof(int));

    if(arr == NULL){
        printf("the array failed to allacate memeory ");
    }

    generaterandom(arr,n);

    clock_t start = clock();
    quicksort(arr,0,n-1);
    clock_t end = clock();

    double time_taken = (double)(end-start)/ CLOCKS_PER_SEC;
    
    printf("The value is  ::  elements :        %d,%d",n,time_taken);
    return 0;
}