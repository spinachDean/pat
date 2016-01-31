#include <cstdio>  
#include <iostream>  
#include <vector>  
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    char A[1001];
    int b;
    int curr = 0, q = 0, len;
    vector<int> shang;
    scanf("%s%d", A, &b);
    curr = A[0] - '0';
    if ((A[0] - '0')>b) {
        shang.push_back((A[0] - '0') / b);
    }
    len = strlen(A);

    for (int i = 1; i < len; i++) {
        q = curr % b;
        curr = q * 10 + (A[i] - '0');
        shang.push_back(curr / b);
    }

    q = curr%b;

    if (len == 1 && (A[0] - '0')<b) {
        printf("%d %d", 0, A[0]-'0');
    }
    else {
        for (int n = 0; n != shang.size(); n++) {
            printf("%d", shang[n]);
        }
        printf(" %d", q);
    }
    return 0;
}