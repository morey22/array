#include<stdio.h>
void reverse(int arr[]){
    int n;
    for(int i=0,j=n;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    } 
    for(int i=0;i<n;i++){
        reverse(arr);
        printf("%d", arr[i]);
    }
    return 0;
}