#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("Enter the elements of array : ");
    printf("\n");
    int arr[n];
    int element;
    printf("Enter the element for search : ");
    scanf("%d", &element);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}