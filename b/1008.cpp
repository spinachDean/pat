#include <iostream>  
#include <fstream>
#include <cstring>  
#include <algorithm>  
#include <cstdio>

using namespace std;
int main() {
    int n, m;
    int nums[100];
    int i;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", nums + i);

    m = n - m%n;
    for (i = m; i < n; i++)
        printf("%d ", nums[i]);
    for (i = 0; i < m; i++)
        printf(i!=m-1? "%d ":"%d", nums[i]);
    return 0;
}
