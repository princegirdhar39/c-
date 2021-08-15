#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #include <Climit>

int main()
{

    int max_sum = INT_MIN;
    int n = 4;
    int arr[n] = {-1, 4, 7, 2};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum << endl;
    // return 0;
}
