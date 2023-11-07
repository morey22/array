#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[j]!=0)
		{
			a[j++]=a[i];
		}
	}
	while(j<n)
	{
		a[j]=0;
		j++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}