// Problem#: 1154
// Submission#: 2459426
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#define swap(m, n) m ^= n ^= m ^= n

int main() {
    int t, n, a[1000+1];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++)
            for (int j = 1; j < n - i; j++)
                if (a[j - 1] > a[j])
                    swap(a[j - 1], a[j]);

        for (int i = 0; i < n; i++) printf("%d\n", a[i]);
    }

    return 0;
}

