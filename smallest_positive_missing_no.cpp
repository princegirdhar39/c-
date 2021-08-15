#include <iostream>

using namespace std;

int main()
{
    int n = 6;

    int arr[n] = {0, -9, 1, 3, -4, 5};

    int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i <= n; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}