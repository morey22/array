#include <stdio.h>
int main(){
    int n,temp=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-i-1;j++){
            if(arr[i]>arr[j]){
               temp = arr[j-1];
               arr[j-1] = arr[j];
               arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}