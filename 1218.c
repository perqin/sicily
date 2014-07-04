#include<stdio.h>
#include<math.h>

int main() {

        int N, M;
        int sum, a, b;
        scanf("%d %d", &N, &M);
    for (b = sqrt(2 * M); b >= 0; b--) {
        if (2 * M % (b + 1) == 0
            && (2 * M / (1 + b) - b) % 2 == 0
            && (2 * M / (1 + b) - b) >= 2) {
                a = (2 * M / (1 + b) - b) / 2;
            if (a + b <= N) printf("[%d,%d]\n", a, a + b);
        }
    }
        return 0;
}
