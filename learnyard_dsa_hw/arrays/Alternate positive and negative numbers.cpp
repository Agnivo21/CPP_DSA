#include<bits/stdc++.h>
using namespace std;


class Solution{
public:

	void rearrange(int arr[], int n) {
	   vector<int> pos;
	   vector<int> neg;
	   for(int i = 0 ; i  < n ; i++)
	   {
	       if( arr[i] >= 0)
	       pos.push_back(arr[i]);
	       else
	       neg.push_back(arr[i]);
	   }
	   int curr_pos = 0 ;
	   int curr_neg = 0 ;
	   int fill_pos = 0 ;
	   while(curr_pos < pos.size() && curr_neg < neg.size())
	   {
	       arr[fill_pos++] = pos[curr_pos++];
	       arr[fill_pos++] = neg[curr_neg++];
	   }
	   while(curr_pos < pos.size())
	   arr[fill_pos++] = pos[curr_pos++];
	   while(curr_neg < neg.size())
	   arr[fill_pos++] = neg[curr_neg++];
	}
};