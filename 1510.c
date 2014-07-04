#include<stdio.h>
#include<string.h>

int main() {
    int i, j, n, m;
    char str[80 + 1];
    scanf("%d", &n);
    for (j = 1; j <= n; j++) {
        memset(str, '\0', sizeof(str));
        scanf("%d %s", &m, str);
        printf("%d ", j);
        for (i = 0; str[i]; i++) {
            if (i != m - 1)
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
