#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int subArraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;

    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            cout << start<< "to" << i-1;
            return 1;
        }
    if (i < n)
    {
        curr_sum += arr[i];
    }
    }


    cout << "Not found";
    return 0;
}

int main()
{
    
    int arr[] = { 15, 2, 6, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 14;

    subArraySum(arr, n, sum);
}
//   int curr_sum;
//      for(int i=0;i<n;i++){
//          curr_sum = arr[i];
//          for(int j=i+1;j<=n;j++){

//              if(curr_sum== sum) {
//                  cout<<i<<"and"<<j <<endl;
//                  return 1;
//              }
//              if(j==n || curr_sum>sum )
//                  break;

//              curr_sum+=arr[j];
//          }

//      }
//      cout<<"No subarray found";
//      return 0;
