#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <string>
#include <iostream>

int main() {
    std::string strInput;
    std::getline(std::cin, strInput);

    int iPos = strInput.find('E');

    std::string strSignificant = strInput.substr(0, iPos);
    int iExp = atoi(strInput.substr(iPos + 1).c_str());

    if ('-' == strSignificant[0])
        std::cout << '-';
    strSignificant = strSignificant.substr(1);

    if (0 == iExp)
        std::cout << strSignificant;

    if (iExp < 0) {
        std::cout << "0.";
        int iCount = -iExp - 1;
        while (iCount--)
            std::cout << '0';
        iCount = strSignificant.size();
        for (int i = 0; i < iCount; ++i)
            if ('.' != strSignificant[i])
                std::cout << strSignificant[i];
    }

    if (iExp > 0) {
        if (iExp >= strSignificant.size() - 2) {
            strSignificant.append(iExp - strSignificant.size() + 2, '0');
            for (int i = 0; i < strSignificant.size(); ++i)
                if ('.' != strSignificant[i])
                    std::cout << strSignificant[i];
        }
        else {
            std::cout << strSignificant[0] << strSignificant[2];
            int iLen = iExp - 1;
            int idx = 0;
            for (idx = 0; idx < iLen; ++idx)
                std::cout << strSignificant[3 + idx];
            std::cout << '.' << strSignificant.substr(3 + idx);
        }
    }
    return 0;
}