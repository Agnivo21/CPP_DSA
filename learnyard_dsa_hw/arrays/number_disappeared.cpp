/*
We know that nums is of size is n and it 
contains only elements from [1, n]. 
We can map each element of the range [1, n] to the indices of nums 
from [0, n-1].

Thus, the above property can be used to mark if an
element from range [1, n] is present in nums or not.
How?
We can iterate over nums and for each element, 
we know it can be mapped to index nums[i]-1. 
We can therefore mark the element nums[i] as present in nums by making 
the element at index nums[i]-1 negative. 
Thus after iterating the array, we have - nums[i] < 0 or nums[i] is 
negative only if the element i+1 is present in the array.
nums[i] > 0 or nums[i] is positive only if the element i+1 is not 
present in the array
We need to take care that some elements may already be negated. 
Thus, to avoid negative indexing or converting a negative element 
back to positive, we use abs() to get the absolute value of elements.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> ans;
        for(int i = 0 ; i < nums.size();i++)
        {
            int idx = abs(nums[i]) -1;
            if(nums[idx] < 0)
            continue;
            nums[idx] *= -1;
        }
        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] > 0)
            ans.push_back(i+1);

        }
        return ans;


        // int l = nums.size();
        // vector<int> count(l+1,0);
        // vector<int> ans;
        // for(auto x : nums)
        // {
        //     count[x]++;
        // }
        // for(int i = 1 ; i <= l ;i++)
        // {
        //     if(count[i] == 0)
        //     ans.push_back(i);
        // }
        // return ans;
    }
};