#include<stdio.h>
int max(int a, int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c;
	c = max(a, b);
	printf("%d",c);
}
