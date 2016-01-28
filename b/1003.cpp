#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
int main() {
    int casen;
    scanf("%d", &casen);
    while (casen--) {
        char buf[101];
        int p, t, len;
        scanf("%s", buf);
        std::string s = std::string(buf);
        len = s.length();
        p = s.find('P');
        t = s.find('T');
        if (p == std::string::npos || t == std::string::npos || (p >= t - 1))
            printf("NO\n");
        else {
            std::string a(s, 0, p);
            std::string b(s, p + 1, t - p - 1);
            std::string c(s, t + 1, len - t - 1);
            std::string ans = a + b + c;
            if (ans.find_first_not_of('A') != std::string::npos)
                printf("NO\n");
            else
                if (a.length()*b.length() == c.length())
                    printf("YES\n");
                else
                    printf("NO\n");
        }
    }
}