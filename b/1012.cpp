#include <cstdio>
int main() {
    double result[5] = { 0 };
    int flag[5] = { 0 };
    int temp;
    int n;
    int flag1 = 1;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        switch (temp % 5) {
        case 0:
            if (temp % 2 == 0) {
                result[0] += temp;
                flag[0] = 1;
            }
            break;
        case 1:
            result[1] += flag1*temp;
            flag1 *= -1;
            flag[1] = 1;
            break;
        case 2:
            result[2]++;
            flag[2] = 1;
            break;
        case 3:
            result[3] += temp;
            count++;
            flag[3] = 1;
            break;
        case 4:
            if (temp > result[4]) {
                result[4] = temp;
                flag[4] = 1;
            }
            break;
        }
    }
    if (!flag[0]) printf("N ");
    else printf("%0.0f ", result[0]);
    if (!flag[1]) printf("N ");
    else printf("%0.0f ", result[1]);
    if (!flag[2]) printf("N ");
    else printf("%0.0f ", result[2]);
    if (!flag[3]) printf("N ");
    else printf("%.1f ", 1.0*result[3] / count);
    if (!flag[4]) printf("N");
    else printf("%0.0f", result[4]);
    return 0;
}