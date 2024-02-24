#include<bits/stdc++.h>
using namespace std;
//kadane algorithm 
// tc ----> o(n)
// auxilary sc -----> o(1)
// total sc ---->o(n) 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int final_sum = INT_MIN;
       for(auto x : nums)
       {
           curr_sum += x;
           final_sum = max(final_sum , curr_sum);
           if(curr_sum < 0 )
           {
               curr_sum = 0;
           } 
       }
      return final_sum;  
    }
};