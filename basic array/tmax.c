#include <stdio.h>
int main(){
    int n,max=0,smax=0,tmax=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            tmax = smax;
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax){
            smax = arr[i];
            tmax = smax;
        }
        else if(arr[i]<tmax){
            tmax = arr[i];
        }
    }
    printf("Tmax is %d", tmax);
    return 0;
}