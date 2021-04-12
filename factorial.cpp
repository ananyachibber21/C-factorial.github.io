#include<stdio.h>
#include<math.h>

int main()

{
	int n;
	int i;
	int fact=1;
	printf("Enter the num: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("%d",fact);
	
	
}
