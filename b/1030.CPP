#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int cmp(const void *op1, const void *op2) {
    return *(long *)op1 > *(long *)op2 ? 1 : -1;
}
int main() {
    int M, m, p, cnt = 1;
    int n;
    long *ar;
    scanf("%d%d", &n, &p);
    ar = (long*)malloc(sizeof(long)*n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", ar + i);
    }
    qsort(ar, n, sizeof(long), cmp);
    for (int i = 0; i < n; i++)
        for (int j = i + cnt - 1; j < n; j++)
            if (ar[i] * p >= ar[j]) {
                if (j - i + 1 > cnt)
                    cnt = j - i + 1;
            }
            else
                break;
    printf("%d", cnt);
    return 0;
}