#include<stdio.h>
void snake_draw(int n,int m)
{
	for (int i=0;i<n;++i)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;++j){
				putchar('#');
			}
		}
		else{
			if((i/2)%2==0){
				for(int j=0;j<m-1;++j){
					putchar('.');
				}
				putchar('#');
			}
			else{
				putchar('#');
				for( int j=1;j<m;++j){
					putchar('.');
				}
			}
		}
	    putchar('\n');
	}
}
int main(){
int n,m;
scanf("%d %d",&n,&m);
snake_draw(n,m);
return 0;
}

