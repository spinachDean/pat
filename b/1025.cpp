#include<cstring>  
#include<cstdio>  
#include<cstdlib>  
#include<iostream>  
#include<vector>  
#include<algorithm>  
using namespace std;
typedef long long ll;
struct node {
    int address;
    int val;
    int next;
}tmp;
int main() {
    vector<node>vin(100006);
    vector<node>vsort;
    vector<node>vout;
    int first, n, k, i, j;
    while (scanf("%d%d%d", &first, &n, &k) != EOF) {
        for (i = 0; i<n; i++) {
            scanf("%d%d%d", &tmp.address, &tmp.val, &tmp.next);
            vin[tmp.address] = tmp;
        }
        if (first == -1) {
            printf("-1\n");
            continue;
        }
        while (first != -1) {
            vsort.push_back(vin[first]);
            first = vin[first].next;
        }
        int len = vsort.size();
        for (i = k; i <= len; i += k) 
            for (j = i - 1; j >= i - k; j--) 
                vout.push_back(vsort[j]);
        for (j = (len / k)*k; j<len; j++) 
            vout.push_back(vsort[j]);
        for (i = 0; i<len - 1; i++) {
            vout[i].next = vout[i + 1].address;
            printf("%05d %d %05d\n", vout[i].address, vout[i].val, vout[i].next);
        }
        if (len >= 1)
            printf("%05d %d -1\n", vout[len - 1].address, vout[len - 1].val);

    }
    return 0;
}