#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
    char c;
    char t[100000];
    bool table[128];
    memset(table, 1, sizeof(table));
    while (scanf("%c", &c) != EOF&&c != '\n') {
        if (c == '+') {
            for (char j = 'A'; j <= 'Z'; j++)
                table[j] = 0;
        }
        else {
            table[c] = 0;
            if (c >= 'A'&&c <= 'Z')
                table[c + 32] = 0;
        }
    }
    scanf("%s", &t);
    for (int i = 0; t[i] != 0; i++) {
        if (table[t[i]])
            printf("%c", t[i]);
    }

    return 0;
}