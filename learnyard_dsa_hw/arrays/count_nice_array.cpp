#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int subArrays(vector<int>& arr, int n,int k){
    int i=0,j=0,cnt=0;
    int ans=0;
    while(j<n){
            if(arr[j]%2!=0){
                cnt++;
            }
           while(i<=j && cnt>k){
               if(arr[i]%2!=0){
                   cnt--;
               }
               i++;
           }
           ans+=j-i+1;
            j++;
        }
        return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        
        
        int ans=subArrays(nums,n,k)-subArrays(nums,n,k-1);
        return ans;
    }
};