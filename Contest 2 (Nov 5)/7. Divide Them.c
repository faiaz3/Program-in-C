#include<stdio.h>

int main() {
    int N, K;

    scanf("%d", &N);

    int roll[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &roll[i]);
    }

    scanf("%d", &K);

    for(int i = K; i < N; i++) {
        printf("%d ", roll[i]);
    }
    for(int i = 0; i < K; i++) {
        printf("%d ", roll[i]);
    }

    return 0;
}
