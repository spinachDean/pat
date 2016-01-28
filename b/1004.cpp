#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
struct Student {
    char name[11];
    char num[11];
    int score;
};
int main() {
    int casen;
    scanf("%d", &casen);
    Student max, min, temp;
    scanf("%s%s%d", &temp.name, &temp.num, &temp.score);
    min = max = temp;
    casen--;
    while (casen--) {
        scanf("%s%s%d", &temp.name, &temp.num, &temp.score);
        if (max.score < temp.score) max = temp;
        if (min.score > temp.score) min = temp;
    }
    printf("%s %s\n", max.name, max.num);
    printf("%s %s", min.name, min.num);
    return 0;
}