#include<bits/stdc++.h>
using namespace std;

vector<int> merge2array(vector<int> &left , vector<int> &right)
{
    vector<int> ans;
    int i = 0 ,j = 0 ;
    while( i < left.size() and j < right.size())
    {
        if(left[i] <= right[j])
        {
            ans.push_back(left[i++]);
        }
        else{
            ans.push_back(right[j++]);
        }
    }
    while( i < left.size())
    {
        ans.push_back(left[i++]);
    }
    while( j < right.size())
    {
        ans.push_back(right[j++]);
    }
    return ans;
}
vector<int> mergesort(vector<int> &nums)
{
  int n = nums.size();
  if( n == 1)
  return nums;
  vector<int> left(nums.begin() , nums.begin() + n/2);
  vector<int> right(nums.begin() + n/2 , nums.end());
  left = mergesort(left);
  right = mergesort(right);
  return merge2array(left,right);
}

int main()
{
    vector<int> arr(5);
    arr = {2,5,1,4,3};
    arr = mergesort(arr);
    for( auto x : arr)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}