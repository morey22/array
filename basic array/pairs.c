#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int totalpair = 0;
    int x = 12;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==x){
               totalpair++;
               printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d", totalpair);
    return 0;
}