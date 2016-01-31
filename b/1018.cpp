#include <cstdio>  
#include <iostream>  
#include <vector>  
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n;
    char a, b;
    int times[3];
    int win[2][3];
    int max[2];
    memset(times, 0, sizeof(times));
    memset(win, 0, sizeof(win));
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        switch (a) {
        case 'C':
            if (b == 'C') times[1]++;
            else if (b == 'J') {
                times[0]++;
                win[0][1]++;
            }
            else if (b == 'B') {
                times[2]++;
                win[1][0]++;
            }
            break;
        case 'J':
            if (b == 'J') times[1]++;
            else if (b == 'B') {
                times[0]++;
                win[0][2]++;
            }
            else if (b == 'C') {
                times[2]++;
                win[1][1]++;
            }
            break;
        case 'B':
            if (b == 'B') times[1]++;
            else if (b == 'C') {
                times[0]++;
                win[0][0]++;
            }
            else if (b == 'J') {
                times[2]++;
                win[1][2]++;
            }
            break;
        }
    }
    printf("%d %d %d\n", times[0], times[1], times[2]);
    printf("%d %d %d", times[2], times[1], times[0]);
    for (int i = 0; i < 2; i++) {
        int temp = win[i][0];
        max[i] = 0;
        for (int j = 0; j < 3; j++) {
            if (temp < win[i][j]) {
                max[i] = j;
                temp = win[i][j];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++) {
        switch (max[i]) {
        case 0:
            printf("B"); break;
        case 1:
            printf("C"); break;
        case 2:
            printf("J"); break;
        }
        if (i != 1)printf(" ");
    }
    return 0;
}