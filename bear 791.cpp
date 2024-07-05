#include<stdio.h>
int main()
{
	int a,b,yr=0;
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		a*=3;
		b*=2;
		yr++;
}
	printf("%d",yr);
	return 0;
}
