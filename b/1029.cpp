#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char s[81], t[81], cnt;
    vector<char> v;
    vector<char>::iterator i;

    scanf("%s%s", s, t);
    cnt = 0;
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] != t[i - cnt]) {
            cnt++;
            if (find(v.begin(), v.end(), s[i]) == v.end() && ((s[i] >= 'a'&&s[i] <= 'z') ? find(v.begin(), v.end(), s[i] - 32) == v.end() : 1))
                if (s[i] >= 'a'&&s[i] <= 'z')
                    v.push_back(s[i] - 32);
                else
                    v.push_back(s[i]);
        }
    }
    for (i = v.begin(); i != v.end(); i++) {
        printf("%c", *i);
    }
    return 0;
}