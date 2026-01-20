// sub array is a cuntinous of an array 

// arr[] = 2,4,6,8;
// ex = 2   2,4    2,4,6     2,4,6,8       4    4,6   4,6,8      6  6,8  8
// n*(n+1)/2    here n = number of elemnt in array 

// example arr = 2,4,6,8
//      n = 4
//      4*(4+1)/2 = 20/2  = 10  sub arrays will be ther,,,



//  in code 
//     create an array
//     define function
//         for loop of i to n
//             for loop of j=i to n   
//                 for loop of k=i  to j k++
//                     print(arr[k]);
//                     next line
//                 next line



#include<stdio.h>
int main(){
    int arr[4];
    printf("Enter elemts for arr[4]: ");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int n = 4,count=0;
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                printf("%d",arr[k]);
                count++;
            }
            printf("\n");
        }
        printf("\n");
    }
}