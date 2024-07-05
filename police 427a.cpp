#include <stdio.h>

int main()
 {
	int n,police=0,unsolved=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)//we can also use while(n--)
	{
	   int event;
	   scanf("%d",&event);
	   if(event==-1)
	   {
	   	if(police>0)
		   {
	   		police--;
		   }
		else{
			unsolved++;
		    }
		}
		else
		{
		police=police+event;
		}
	  printf() ;

	}
    return 0;
}
