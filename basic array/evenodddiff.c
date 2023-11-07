#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            sumEven += arr[i];
        }
        else{
            sumOdd += arr[i]; 
        }
    }
    int diff = sumEven - sumOdd;
    printf("%d ", diff);
    return 0;
}