#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0,j=n-1;i<=n;i++,j--){
        brr[j] = arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ", brr[i]);
    }
    return 0;
}