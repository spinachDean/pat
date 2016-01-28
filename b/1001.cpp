#include <iostream>
int main() {
    long n;
    int i;
    std::cin >> n;
    for (i = 0; ; i++)
    {
        if (n == 1) break;
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = (3 * n + 1) / 2;
        }
    }
    std::cout << i;
    return 0;
}