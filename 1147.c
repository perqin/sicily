#include<stdio.h>

int main() {
    int i, j, n, max = 0, sum = 0;
    struct one {
        char name[100]; int Term; int Class;
        char Moniter; char West; int articles;
        int sum = 0;
    };
    struct one list[100 + 1];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %d %c %c %d",
            list[i].name, &list[i].Term, &list[i].Class,
            &list[i].Moniter, &list[i].West, &list[i].articles);
        if (list[i].Term > 80 && list[i].articles >= 1) list[i].sum += 8000;
        if (list[i].Term > 85 && list[i].Class > 80) list[i].sum += 4000;
        if (list[i].Term > 90) list[i].sum += 2000;
        if (list[i].West == 'Y' && list[i].Term > 85) list[i].sum += 1000;
        if (list[i].Class > 80 && list[i].Moniter == 'Y') list[i].sum += 850;
    }
    for (i = 0, j = 0; i < n; i++) {
        if (max < list[i].sum){
            j = i;
            max = list[i].sum;
        }
        sum += list[i].sum;
    }
    printf("%s\n%d\n%d\n", list[j].name, max, sum);
    return 0;
}
