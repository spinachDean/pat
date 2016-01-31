#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<stack>
using namespace std;
int main() {
    long a, b, num;
    int d;
    num = 0;
    stack<int> s;
    scanf("%ld%ld%d", &a, &b, &d);
    num = a + b;
    if (num == 0)
        printf("0");
    while (num) {
        s.push(num % d);
        num /= d;
    }
    while (!s.empty()) {
        printf("%d", s.top());
        s.pop();
    }
    return 0;
}