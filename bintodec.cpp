#include <bits/stdc++.h>
using namespace std;


int bintodec(int n) {
    int x = 1;
    int ans = 0;

     while(n>0){
         int y = n%10;
         ans += x*y;
         x *= 2;
         //x*= 8; octtodec
         n /=10;
     }
     return ans;

}

int main() {
    int n;
    cin>>n;

    int res = bintodec(n);
    cout<<res<<endl;




}