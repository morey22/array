#include <stdio.h>
int main(){
    int n,oddsum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            oddsum = oddsum + arr[i];
        }
    }
    printf("odd sum is %d", oddsum);
    return 0;
}