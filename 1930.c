#include<stdio.h>

int main() {
    int t, n, a[255], total;
    scanf("%d", &t);
    while (t--) {
        total = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) {
            int k = i;
            for (int j = i + 1; j < n; j++) {
                if (a[k] > a[j]) {
                    k = j;
                    total++;
                }
            }
            if (k != i) {
                int temp = a[k];
                a[k] = a[i];
                a[i] = temp;
            }
        }
        printf("%d\n", total);
    }

    return 0;
}
