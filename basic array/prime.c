#include <stdio.h>
int main(){
    int n,a,c=0;
    int i;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                c = c+1;
            }
        }
         if(c==2){
            arr[i]=a;
        }
    }
    printf("%d", arr[i]);
    
}