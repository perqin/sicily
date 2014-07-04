#include<stdio.h>

int Zeller(int Y, int m, int d);
char *day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
"Friday", "Saturday" };
int main() {
    int T, m, d;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &m, &d);
        Zeller(2011, m, d);
    }
    return 0;
}

int Zeller(int Y, int m, int d) {
    int W,
        c, y;
    y = Y % 100;
    c = Y / 100;

    if (m <= 2) {
        y--;
        m += 12;
    }

    if (Y > 1580) {
        W = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
    }
    else if (Y < 1580) {
        W = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d + 2;
    }
    else if (Y == 1580) {
        if (m == 10) {
            if (d >= 5 && d <= 14) {
                printf("The date doesn't exist.\n");
                return 0;
            }
            else if (d < 5) {
                W = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d + 2;
            }
            else {
                W = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
            }
        }
        else if (m < 10) {
            W = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d + 2;
        }
        else {
            W = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
        }
    }
    W = (W % 7 + 7) % 7;
    printf("%s", day[W]);
    printf("\n");
    return 0;
}
