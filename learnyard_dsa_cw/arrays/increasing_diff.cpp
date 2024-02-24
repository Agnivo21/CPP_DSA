#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_till_now = nums[0];
        int max_diff = -1;
        for(int  i = 1 ; i < nums.size(); i++)
        {
            if(min_till_now < nums[i])
            {
              max_diff = max(max_diff , nums[i] - min_till_now );
            }
            min_till_now = min(nums[i],min_till_now);
        }
        return max_diff;  
    }
};