#include <stdio.h>
#include <limits.h>
int main()
{
  int n,i,j;
   printf("Enter size of array : \n");
  scanf("%d",&n);
  int arr[n];
  int min=INT_MAX;
  int max=INT_MIN;
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
  if(arr[i]>max){
    max=arr[i];
  }
  if(arr[i]<min){
    min=arr[i];
  }
  }
  printf("Min = %d\n",min);
  printf("Max = %d\n",max);
  return 0;
}