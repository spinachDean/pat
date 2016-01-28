#include <iostream>  
#include <cstring>  
#include <vector>  
#include <algorithm>  
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int array[101];
    vector<int> vec;
    int K, temp;
    bool flag = false;
    cin >> K;
    memset(array, 0, sizeof(array));
    while (K--)
    {
        cin >> temp;
        vec.push_back(temp);
        while (temp > 1)
        {
            if (temp % 2 == 1)
                temp = 3 * temp + 1;
            temp /= 2;
            if (temp <= 100)
                array[temp] = 1;
        }
    }
    sort(vec.begin(), vec.end(), compare);
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        if (array[*it] == 0)
        {
            if (flag)
                cout << " ";
            else
                flag = true;

            cout << *it;
        }
    }
    cout << endl;
    return 0;
}