#include<stdio.h>
int main(){
    int marks[10];
    int n = 10;
    for(int i=0;i<n;i++){
        scanf("%d", &marks);
    }
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            printf("%d", i);
        }
    }
    return 0;
}