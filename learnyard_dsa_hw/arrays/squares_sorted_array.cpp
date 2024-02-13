#include<bits/stdc++.h>
using namespace std;
/*
  Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach? 
  -->  yes using 2 pointer approach,and using sorted array property in the given question.

*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> aux(n);
        int end = n-1;
        int st = 0;
        int k = n-1;
        while(st < end)
        {
            int val_st = abs(nums[st]);
            int val_end = abs(nums[end]);
            if( val_st > val_end)
            {
                aux[k] = val_st;
                k--;
                st++; 
            }
            else
            {
                aux[k] = val_end;
                k--;
                end--;
            }
        }
        while( k >= 0)
        {
            aux[k--] = abs(nums[end--]);
        }
        for(int i = 0 ; i < n ;i++)
        aux[i] *=aux[i];
        return aux;
    }
};