#include<stdio.h>
int main()
{
	int i, n;
	scanf("%d",&n);
	double total_percentage=0;
	double p;
	 for(i=0;i<n;i++){
	 	scanf("%lf",&p);
	     total_percentage = total_percentage+p;
	  }
	double average=total_percentage/n;
    printf("%.10f\n",average);
	return 0;
}

