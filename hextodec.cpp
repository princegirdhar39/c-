#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int hextoben(string s1)
{
    int ans = 0;
    int x = 1;
    int len = s1.size();

    for (int i = len - 1; i >= 0; i--)
    {
        if (s1[i] >= '0' && s1[i] <= '9')
        {
            ans += x * (s1[i] - '0');
        }
        else if (s1[i] >= 'A' && s1[i] <= 'F')
        {
            ans += x * (s1[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int32_t main()
{
    string s1;
    cin >> s1;
    cout << hextoben(s1);
}