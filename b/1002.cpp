#include <iostream>
#include <cstdio>
int main() {
    char c;
    int sum;
    char bits[10];
    sum = 0;
    while (scanf("%c", &c) != EOF && c!='\n') {
        sum = sum + c - '0';
    }
    sprintf(bits, "%d", sum);
    int i = 0;
    while (bits[i]) {
        if(i!=0)
            printf(" ");
        switch (bits[i]-'0') {
        case 1:
            printf("yi"); break;
        case 2:
            printf("er"); break;
        case 3:
            printf("san"); break;
        case 4:
            printf("si"); break;
        case 5:
            printf("wu"); break;
        case 6:
            printf("liu"); break;
        case 7:
            printf("qi"); break;
        case 8:
            printf("ba"); break;
        case 9:
            printf("jiu"); break;
        case 0:
            printf("ling"); break;
        default:
            break;
        }
        i++;
    }
}