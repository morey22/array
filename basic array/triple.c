#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int totaltriples = 0;
    int x = 12;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    totaltriples++;
                    printf("(%d,%d,%d)\n", arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("Total no of Triples is : %d", totaltriples);
    return 0;
}