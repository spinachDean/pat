#include <iostream>  
#include <cstring>  
#include <algorithm>  
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int x, y, z;
    int i;
    scanf("%d", &n);
    x = n / 100;
    y = (n % 100) / 10;
    z = n % 10;
    for (i = 0; i < x; i++)
        printf("B");
    for (i = 0; i < y; i++)
        printf("S");
    for (i = 0; i < z; i++)
        printf("%d", i+1);
    return 0;
}