#include <iostream>  
#include <cstdio>  
using namespace std;

int main()
{
    char s[4][61];
    int h, m;
    int flag1 = 1, flag2 = 1;
    for (int i = 0; i < 4; i++)
        scanf("%s", s[i]);
    for (int i = 0; s[0][i] != 0 && s[1][i] != 0; i++) {
        if (s[0][i] == s[1][i] && flag1&&s[0][i] >= 'A'&&s[0][i] <= 'G') {
            flag1 = 0;
            switch (s[0][i])
            {
            case 'A': printf("MON "); break;
            case 'B': printf("TUE "); break;
            case 'C': printf("WED "); break;
            case 'D': printf("THU "); break;
            case 'E': printf("FRI "); break;
            case 'F': printf("SAT "); break;
            case 'G': printf("SUN "); break;
            }
            continue;
        }
        if (!flag1 && flag2 &&s[0][i] == s[1][i]) {
            if (s[0][i] >= '0'&&s[0][i] <= '9')
            {
                printf("%02d:", s[0][i] - '0');
                break;
            }
            if (s[0][i] >= 'A'&&s[0][i] <= 'N')
            {
                printf("%02d:", (s[0][i] - 'A' + 10));
                break;
            }
        }

    }

    for (int i = 0; s[2][i] != '\0'&&s[3][i] != '\0'; i++)
    {
        if (s[2][i] == s[3][i] && ((s[2][i] >= 65 && s[2][i] <= 90) || (s[2][i] >= 97 && s[2][i] <= 122)))
        {
            printf("%02d", i);
            break;
        }
    }
    return 0;
}