#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        unsigned long long fact = 1; // Initialize with 1 (correct for N=0 and N=1)
        
        for (int i = 2; i <= N; i++) { // Start from 2 since 0! and 1! are 1
            fact *= i;
        }

        printf("%llu\n", fact);
    }

    return 0;
}
