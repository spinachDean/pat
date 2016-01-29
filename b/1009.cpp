#include <iostream>  
#include <cstring>  
#include <string>
#include <algorithm>  
#include <cstdio>
#include <stack>
using namespace std;
int main() {
    stack<string> s;
    string temp;
    while (std::cin >> temp) {
        s.push(temp);
    }
    cout << s.top();
    s.pop();
    while (!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }
    return 0;
}
