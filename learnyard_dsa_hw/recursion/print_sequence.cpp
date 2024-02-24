#include<bits/stdc++.h>
using namespace std;

 void loop_pattern2(int n, vector<int> &ans, int end)
    {
        ans.push_back(n);
        if(n == end)  return;
        loop_pattern2(n+5,ans,end);
    }
    int loop_pattern1(int n, vector<int> &ans)
    {
        ans.push_back(n);
        if(n <= 0)  return n+5;
        loop_pattern1(n-5,ans);
    }
    vector<int> pattern(int N){
        vector<int> ans;
        if(N<=0)  return {N};
        int value = loop_pattern1(N,ans);
        loop_pattern2(value,ans,N);
        return ans;
    }
int main()
{
    vector<int> ans = pattern(10);
    for(auto x : ans)
    cout << x <<" ";
    return 0;
}