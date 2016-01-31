#include <cstdio>  
#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;

int main() {
    char c;
    int sum=0;
    int data=0;
    int num;
    int counter[10] = { 0 };
    while (scanf("%c", &c) != EOF && c != ' ') counter[c - '0']++;
    scanf("%d", &num);
    for (int i = 0; i < counter[num]; i++) {
        data = data * 10 + num;
    }
    sum += data; data = 0;
    for (int i = 0; i < 10; i++) counter[i] = 0;
    getchar();
    while (scanf("%c", &c) != EOF && c != ' ') counter[c - '0']++;
    scanf("%d", &num);
    for (int i = 0; i < counter[num]; i++) {
        data = data * 10 + num;
    }
    sum += data;
    printf("%d", sum);
    return 0;
}