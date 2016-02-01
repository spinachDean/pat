#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int n, cnt = 0, max_i = -1, min_i = -1;
    cin >> n;
    string name[100000], birthday[100000];
    string oldday = "2014/09/06", youngday = "1814/09/06";
    //和总是把max初始化为最小道理一样
    for (int i = 0; i<n; i++)
    {
        cin >> name[i] >> birthday[i];

        if (birthday[i] >= "1814/09/06" && birthday[i] <= "2014/09/06")
        {
            cnt++;
            if (birthday[i] >= youngday)//在合法的情况下查找最大和最小
            {
                youngday = birthday[i];
                min_i = i;
            }
            if (birthday[i] <= oldday)
            {
                oldday = birthday[i];
                max_i = i;
            }
        }
    }

    if (cnt>0)
    {
        cout << cnt << " ";
        cout << name[max_i] << " " << name[min_i];
    }
    else
        cout << "0";
    return 0;
}