#include <stdio.h>
int main(){
    int n,max=0,smax=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax){
            smax = arr[i];
        }
    }
    printf("second max is %d", smax);
    return 0;
}