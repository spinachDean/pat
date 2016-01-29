#include <iostream>  
#include <cstring>  
#include <string>
#include <algorithm>  
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;
int main() {
    queue<pair<int, int>> q;
    pair<int, int> temp;
    int m, n;
    int count;
    while (scanf("%d%d", &m, &n) != EOF) {
        pair<int, int> data(m, n);
        q.push(data);
        count++;
    }

    temp = q.front();
    q.pop();
    if (temp.second == 0);
    else
        printf("%d %d", temp.first*temp.second, temp.second - 1);

    if (count == 0 || count == 1 && temp.second == 0)
        printf("0 0");

    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp.second == 0) ;
        else
            printf(" %d %d", temp.first*temp.second, temp.second-1);
    }
    return 0;
}
