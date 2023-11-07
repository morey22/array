#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int x,c=0;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element of x : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            c++;
        }
    }
    printf("count of c : %d\n", c);
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;

}