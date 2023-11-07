#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int x = 4;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d is present in this array\n", x);
            printf("%d is the index of the element", i);
        }
        else{
            printf("in this array there is no element");
            break;
        }

    }
    return 0;
}