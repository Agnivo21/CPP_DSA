
#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {

    //**********use of sliding window********** 
        int n = nums.size();
        int curr_sum = 0;
        for( int  i = 0 ; i <= k-1; i++)
        {
          curr_sum += nums[i];
        }
        int max_sum = curr_sum;
        for(int st = 1 ,end = k; end < n ; st++,end++)
        {
            curr_sum -=nums[st-1];
            curr_sum += nums[end];
            max_sum = max(max_sum , curr_sum);
        }
        double ans =(double) max_sum/k;//typecast it oherwise it will perform int division.
        return ans;
    }