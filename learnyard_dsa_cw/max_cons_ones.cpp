#include<bits/stdc++.h>
using namespace std;

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_ones = 0;
        int final_ones = 0;
        

        // MORE OPTIMAL APPROACH
        for( auto x : nums)
        {
            if(x == 1)
            {
                curr_ones++;
            }
            else{
                final_ones = max(final_ones , curr_ones);
                curr_ones = 0;            
                }
        }
        final_ones = max( final_ones , curr_ones);
        return final_ones;


        // for(auto x : nums)
        // {
        //   if( x == 1)
        //   {
        //     curr_ones++;
        //   }
        //   else
        //   {
        //     curr_ones = 0;
        //   }
        //   final_ones = max(final_ones , curr_ones);
        // }
        // return final_ones;

    }

 int main()
 {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }
    cout<<findMaxConsecutiveOnes(nums);
    return 0;
 }