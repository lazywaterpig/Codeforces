#include <stdio.h>
#define N 10

int main(){
    int arr[N]={2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int front=0, rear=N-1, mid, find;
    scanf("%d", &find);
    while(front<=rear){
        mid=(front+rear)/2;
        if(arr[mid]==find){
            printf("arr[%d]", mid);
            return 0;
        }
        if(arr[mid]<find){
            front=mid+1;
        }
        if(find<arr[mid]){
            rear=mid-1;
        }
    }
    printf("Not Exist");
}