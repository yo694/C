#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    bool levels[n + 1];
    
    // Initialize all levels to false (not passed)
    for (int i = 1; i <= n; ++i) {
        levels[i] = false;
    }

    int p;
    scanf("%d", &p);
    // Read levels Little X can pass
    for (int i = 0; i < p; ++i) {
        int level;
        scanf("%d", &level);
        levels[level] = true;
    }

    int q;
    scanf("%d", &q);
    // Read levels Little Y can pass
    for (int i = 0; i < q; ++i) {
        int level;
        scanf("%d", &level);
        levels[level] = true;
    }

    // Check if all levels from 1 to n are marked as passed
    bool all_passed = true;
    for (int i = 1; i <= n; ++i) {
        if (!levels[i]) {
            all_passed = false;
            break;
        }
    }

    // Output result
    if (all_passed) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}


