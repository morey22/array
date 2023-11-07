#include <stdio.h>
#include <limits.h>
int main(){
    int n,sum=0,avg;
    int max=INT_MIN,min=INT_MAX;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    avg = sum/n;
    printf("The sum average is %d\n", avg);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("max in array is %d\nmin in array is %d", max, min);
    return 0;
}