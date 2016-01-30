#include <cstdio>
int main() {
    int n;
    long x, y, z;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%ld%ld%ld", &x, &y, &z);
        printf("Case #%d: ", i + 1);
        if (x + y > z)
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}