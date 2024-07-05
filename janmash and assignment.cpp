#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int time;
        scanf("%d",&time);
        if (time<=7){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}

