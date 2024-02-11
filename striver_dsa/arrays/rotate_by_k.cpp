#include <bits/stdc++.h> 
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
   int n = arr.size();
   vector<int> ans(n);
   int  t = 0;
   for(int i = k ; i < n ;i++)
   {
    ans[t] = arr[i];
    t++;
   }
   for(int i = 0 ; i < k ;i++)
   {
    ans[t] = arr[i];
    t++;
   }
return ans;
}




int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =  0;  i < n ; i++)
    cin >> arr[i];
    int k;
    cin >> k;
    vector<int> ans = rotateArray(arr,k);
    for(int i =  0;  i < n ; i++)
    cout << ans[i] <<" ";
}
