#include <cstdio>  
#include <iostream>  
#include <vector>  
#include <algorithm>
#include <cstring>
using namespace std;
int compare(const char a, const char b) {
    return a > b;
}
int main()
{
    char num[8];
    int op1, op2;
    scanf("%s", num);
    if (strlen(num) < 4) {
        for (int i = strlen(num); i < 4; i++)
            num[i] = '0';
        num[4] = 0;
    }
    sort(num, num + 4, compare);
    sscanf(num, "%d", &op1);
    sort(num, num + 4);
    sscanf(num, "%d", &op2);
    printf("%04d - %04d = %04d", op1, op2, op1 - op2);
    while (op1 - op2 != 6174 && op1 - op2 != 0) {
        printf("\n");
        sprintf(num, "%04d", op1 - op2);
        sort(num, num + 4, compare);
        sscanf(num, "%d", &op1);
        sort(num, num + 4);
        sscanf(num, "%d", &op2);
        printf("%04d - %04d = %04d", op1, op2, op1 - op2);
    }
    return 0;
}