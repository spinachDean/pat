#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    int n,m,s,max;
    int ar[100000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &m, &s);
        ar[m] += s;
    }
    max = 0;
    for (int i = 0; i < 100000; i++) {
        if (ar[max] < ar[i])
        max = i;
    }
    printf("%d %d", max, ar[max]);
}