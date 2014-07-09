// Problem#: 1144
// Submission#: 2310626
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>

int main() {
    int a[10];
    int height, i, k = 0;
    for (i = 0; i <= 9; i++) {
        scanf ("%d", &a[i]);
    }
    scanf("%d", &height);
    for (i = 0; i <= 9; i++) {
        if (height+30 >= a[i]) k++;
    }
    printf("%d\n", k);
    return 0;
}

