#include <cstdio>

int main() {
    int n, temp=-1, len=1, i, j;
    char c;
    scanf("%d %c", &n, &c);
    while (temp <= n) {
        temp += len * 2;
        len += 2;
    }
    len -= 4;
    for (i = 0; len - (i * 2)>0; i++) {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < len - (i * 2); j++){
            printf("%c", c);
            n--;
        }
        printf("\n");
    }
    for (i-=2; i >= 0; i--) {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < len - (i * 2); j++) {
            printf("%c", c);
            n--;
        }
        printf("\n");
    }
    printf("%d", n);
    return 0;
}