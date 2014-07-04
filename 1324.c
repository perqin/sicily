#include<stdio.h>

int main() {
    int i, j, n, Score;
    char  a[10000] = { '\0' };
    scanf("%d", &n);
    while (n--) {
        scanf("%s", a);
        j = 0;
        Score = 0;
        for (i = 0; a[i]; i++) {
            if (a[i] == 'O') j++;
            if (a[i] == 'X') j = 0;
            Score += j;
        }
        printf("%d\n", Score);
    }

    return 0;
}
