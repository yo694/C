#include <cstdio>

int main()
{
    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);

//    if(m * a > b)
//    {
//        int remain = (n % m) * a;
//        if(remain > b)
//            printf("%d\n", n / m * b + b);
//        else
//            printf("%d\n", n / m * b + remain);
//    }
//    else
//        printf("%d\n", n * a);




//method 2


    if(m*a<b)
    {
    	printf("%d",n*a);
	}
	else{
		printf("%d",(n/m)*b+(n%m)*a<b?(n%m)*a:b);
	}
    return 0;
}
