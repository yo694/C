#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int total_st=x*y;
        int c=total_st*1/2;
        if (z>c){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}
