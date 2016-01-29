#include <iostream>  
#include <fstream>
#include <cstring>  
#include <algorithm>  
#include <cstdio>
using namespace std;
int n;
bool visit[10100000];
int prime[10000000];


void init_prim()
{
    memset(visit, true, sizeof(visit));
    int num = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (visit[i] == true)
        {
            num++;
            prime[num] = i;
        }
        for (int j = 1; ((j <= num) && (i * prime[j] <= n)); ++j)
        {
            visit[i * prime[j]] = false;
            if (i % prime[j] == 0) break; //点睛之笔  
        }
    }
}

int main()
{
    memset(prime, 0, sizeof(prime));
    int count = 0;
    cin >> n;
    int counter, x, y;
    init_prim();
    counter = 0; x = y = 1;
    for (int i = 0; i <= n; ++i) {
        if (prime[i])
        {
            x = y;
            y = prime[i];
            if (y - x == 2) counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
