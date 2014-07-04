#include<stdio.h>

int main() {
    int n;
    long long a, max;
    while (scanf("%d", &n) && n != 0) {
        max = 0;
        while (n--) {
            scanf("%lld", &a);
            max = a > max ? a : max;
        }
        printf("%lld\n", max);
    }
    return 0;
}
