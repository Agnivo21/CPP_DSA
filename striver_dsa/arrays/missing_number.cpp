#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int xor_arr = 0;
    int xor_n = 0;
    for(int i = 0 ; i < N-1 ;i++)
    {
       xor_arr = xor_arr ^ a[i];
       xor_n = xor_n ^ (i+1);
    }
    xor_n =xor_n ^ N;

    return (xor_n ^ xor_arr);
    // long arr_sum = 0;
    // long n_sum = (N*(N+1)) / 2;
    // for(int i = 0 ; i < N - 1;i++ )
    // {
    //   arr_sum += a[i];
    // }
    // return (n_sum - arr_sum);
}
int main()
{
   int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =  0;  i < n ; i++)
    cin >> arr[i];
    cout<< missingNumber(arr,n);
    return 0;
}