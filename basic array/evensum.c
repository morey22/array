#include <stdio.h>
int main(){
    int n,sumEven=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
           sumEven = sumEven+arr[i];
        }
    }
     printf("sum of even number is %d", sumEven);
    return 0;
}