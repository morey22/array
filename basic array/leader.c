#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int mrf=arr[n-1];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>mrf[i]){
            mrf = arr[i];
        }
        printf("%d\n", mrf[i]);
    }
    return 0;

}