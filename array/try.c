#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void rev(int arr[]){
    int first = 0;
    int last = 5-1;
    while(first <last){

        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first ++;
        last--;
    }
}
int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    rev(arr);

    printf("\nElements of array in reverse are\n::");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    
    }
    return 0;
}

// cheat push not practicing day 
// Reading DDCO cheat push

// cheat push 2 31/01/2026
// cheat push 3 01/02/2026 
// maths reading


// cheat push 4 03/02/2026
// cheat push 5 03/02/2026 
// cheat push  03/02/2026 
// DDCO reading

// cheat push 4 03/02/2026
// cheat push 5 03/02/2026 
// cheat push  03/02/2026 
// DDCO reading