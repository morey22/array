#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int k=5;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}