#include<stdio.h>

int main() {
    int L, n, a[101][2], Tree[10000] = {0}, i, j, max, min, remain;
    scanf("%d %d", &L, &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &a[i][1], &a[i][2]);
        for (j = a[i][1]; j <= a[i][2]; j++)
            Tree[j] = 1;
    }

    for (i = 0, remain = 0; i <= L; i++)
        if (!Tree[i]) remain++;

    printf("%d\n", remain);
    return 0;
}
