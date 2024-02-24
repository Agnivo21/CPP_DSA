#include<bits/stdc++.h>
using namespace std;

//*******flexible slidding window*****

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int count_zero = 0; 
        int final_ans = 0;
        int l = 0;
        for(int r = 0 ; r < n ; r++)
        {
            if( nums[r] == 0) count_zero++;
            //searching the valid window
            while( count_zero > k)
            {
                if(nums[l] == 0) count_zero--;
              l++;
            }
           final_ans = max(final_ans, r - l + 1);
        }
        return final_ans;
    }
};