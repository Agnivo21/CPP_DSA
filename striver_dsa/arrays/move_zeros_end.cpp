#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> &a) {
    int curr_zero_pos = -1;
   for(int i = 0 ; i < n ;i++)
    {
     if(a[i] == 0)
     {
        curr_zero_pos = i;
        break;
     }
    }
    if(curr_zero_pos != -1)
    {
     for(int i = curr_zero_pos + 1 ; i < n  ;i++)
     {
        if (a[i] != 0) {
          swap(a[i], a[curr_zero_pos]);
          curr_zero_pos++;
        }
     }
    }
   return a;
    
}


int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n;i++)
    cin >> a[i];
    moveZeros(n,a);
    for(int i = 0 ; i < n;i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}