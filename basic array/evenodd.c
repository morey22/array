#include <stdio.h>
int main(){
    int n,Esum=0,Osum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            Esum += arr[i];
        }
        else{
            Osum += arr[i];
        }
    }
    printf("Even number sum is %d\n", Esum);
    printf("Odd number sum is %d", Osum);
    return 0;
}