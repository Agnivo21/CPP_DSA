#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> pos(n/2 , 0);
        // vector<int> neg(n/2 , 0);
        // for(int i = 0 ; i < n ;i++)
        // {
        //     if( nums[i] > 0 )
        //     pos.push_back(nums[i]);
        //     else
        //     neg.push_back(nums[i]);
        // }
        // for(int i = n-1 ; i >= 0 ;i--)
        // {
        //     if(i % 2 != 0) 
        //     {
        //         nums[i] = neg.back();
        //         neg.pop_back();
        //     }
        //     else
        //     {
        //         nums[i] = pos.back();
        //         pos.pop_back();
        //     }
        // }
        // return nums;

        int pos = 0 , neg = 0; 
        vector<int> ans;
        while(ans.size() < nums.size())
        {
            while(nums[pos] < 0) pos++;
            while(nums[neg] > 0) neg++;
           ans.push_back(nums[pos]);
           ans.push_back(nums[neg]);
           pos++;
           neg++;
        }
        return ans;
    }
};