#include <stdio.h>
#include <stdlib.h>
int sum(int x,int y);
int main() 
{
	int n,i=1;
	printf("Enter a Number:");
	scanf("%d",&n);
	int s=sum(n,i);
	printf("\n\nThe sum of the numbers is:%d",s);
	return 0;
}
int sum(int x,int y)
{
	if(x<y)
	return 0;
	else
	{
		return(y+sum(x,(y+1)));
	}
}
