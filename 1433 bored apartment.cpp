#include<stdio.h>
#include<string.h>
int cal_keypresses(int x){
char str[6];
sprintf(str,"%d",x);
int length=strlen(str);
int digit=str[0]-'0';
int keypresses=0;
for(int d=1;d<digit;++d){
	keypresses+=1+2+3+4;
}
for(int l=1;l<=length;++l){
	keypresses+=l;
}
return keypresses;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x;
	scanf("%d",&x);
		printf("%d\n",cal_keypresses(x));
	}
	return 0;
}
