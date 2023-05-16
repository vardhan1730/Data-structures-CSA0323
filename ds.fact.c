#include<stdio.h>
int fact(int);
int main()
{
	int i,a,n,f;
	printf("enter the number:");
	scanf("%d",&n);
	fact=fact(n);
	printf("%d %d",a);
	getch();
	int fact(int a)
	{
		int f=1;
		for(i=a;i>=1;i--)
		{
			f=f*i;
		}
	}
	
	return f;
}
