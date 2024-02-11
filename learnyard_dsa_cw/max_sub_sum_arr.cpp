#include<bits/stdc++.h>
using namespace std;
// ***************SLIDDING WINDOW******************


long maximumSumSubarray(int k, vector<int> &arr , int n){
        long curr_sum =0;
       for(int st = 0 , end = k-1; st <= end ; st++)
       {
         curr_sum += arr[st];
       }
       long final_sum = curr_sum;
       for( int st = 1 , end = k ; end < n ; st++, end++)
       {
        curr_sum -= arr[st-1];
        curr_sum += arr[end];
        final_sum = max(final_sum , curr_sum);
       }
       return final_sum;
    }

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout<< maximumSumSubarray(k , arr, n);
    return 0;
}