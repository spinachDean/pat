#include <iostream>  
#include <fstream>
#include <cstring>  
#include <cstdio>
#include <cstdlib>
#include <algorithm>  
int main() {
    int m, n;
    int i;
    bool visit[1000000];
    int prime[1000000];
    memset(visit, 1, sizeof(visit));
    int num = 0;
    scanf("%d%d", &m, &n);
    for (i = 2; num <= n&& i<1000000; i++) {
        if (visit[i] == true) {
            num++;
            prime[num] = i;
        }
        for (int j = 1; (j <= num && i*prime[j] < 1000000); j++) {
            visit[i * prime[j]] = false;
            if (i % prime[j] == 0) break;
        }
    }
    if (m == 0) m == 1;
    for (i = m; i <= n; i++)
        if (i != n)
            printf((i - m) % 10 != 9 ? "%d " : "%d\n", prime[i]);
        else
            printf("%d", prime[i]);
    return 0;
}