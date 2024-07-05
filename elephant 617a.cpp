#include <stdio.h>

int main() {
   int x;
   scanf("%d",&x);
   if(x<=5)
   {
      printf("1");
   }
	 else if(x%5==0)
	 {
	  printf("%d",x/5);
	  }
    else
    {
	
     printf("%d",(x/5)+1);
    }
    
    return 0;
}
