#include <stdio.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int has_snack[N];

    // Initialize the has_snack array to 0
    for (int i = 0; i < N; i++) {
        has_snack[i] = 0;
    }

    // Process K groups
    for (int i = 0; i < K; i++) {
        int d;
        scanf("%d", &d);

        // Mark the children who received snacks
        for (int j = 0; j < d; j++) {
            int snuke;
            scanf("%d", &snuke);
            has_snack[snuke - 1] = 1; // Subtract 1 to use zero-based indexing
        }
    }

    // Count the children who did not receive snacks
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (has_snack[i] == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
