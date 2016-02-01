#include <cstdio>

int main() {
    int m, n, k;
    scanf("%d%d", &m, &n);
    k = (n - m) % 100 > 49 ? (n - m) / 100 + 1 : (n - m) / 100;
    printf("%02d:%02d:%02d", (k) / 3600, (k) % 3600 / 60, k % 60);
    return 0;
}