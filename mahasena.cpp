#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N); // Read the number of soldiers
    
    int weapon_count;
    int lucky_count = 0, unlucky_count = 0;
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &weapon_count); // Read number of weapons for each soldier
        if (weapon_count % 2 == 0) {
            lucky_count++;
        } else {
            unlucky_count++;
        }
    }
    
    if (lucky_count > unlucky_count) {
        printf("READY FOR BATTLE\n");
    } else {
        printf("NOT READY\n");
    }
    
    return 0;
}

