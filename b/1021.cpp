#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
    char c;
    int result[10] = { 0 };
    while (scanf("%c", &c) != EOF) {
        result[c - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        if (result[i] != 0)
            printf("%d:%d\n", i, result[i]);
    }
    return 0;
}