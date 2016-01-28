#include <iostream>
#include <cstdio>
#include <cstring>
int main() {
    int casen;
    char **str;
    int i, j, k;
    int *result;
    int weight[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
    char m[] = { '1','0','X','9','8','7','6','5','4','3','2' };
    scanf("%d", &casen);
    str = (char **)malloc(sizeof(char*) * casen);
    result = (int *)malloc(sizeof(int)*casen);

    for (i = 0; i < casen; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 19);
        scanf("%s", str[i]);
        result[i] = -1;
    }
    k = 0;
    for (i = 0; i < casen; i++)
    {
        int sum, flag;
        sum = 0; flag = 0;
        for (j = 0; j < 17; j++)
        {
            if (str[i][j] >= '0'&& str[i][j] <= '9')
                sum += (str[i][j] - '0')*weight[j];
            else {
                flag = 1;
                break;
            }
        }
        sum %= 11;
        if (str[i][17] != m[sum]) flag = 1;
        if (flag) {
            result[k] = i;
            k++;
        }
    }
    if (result[0] == -1) {
        printf("All passed");
    }
    else {
        for (i = 0; i < casen && result[i]!=-1; i++)
        {
            printf("%s\n", str[result[i]]);
        }
    }
    return 0;

}