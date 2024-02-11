#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1 , 2 , 3 , 4,5};
    cout << arr.size()<<endl;
     for(auto x : arr)
     {
        cout <<x << " ";
     }
     arr.pop_back();
     arr.push_back(20);
     arr.push_back(10);
     cout<<endl;
    for(auto x : arr)
     {
        cout <<x << " ";
     }
     cout<<endl;
     vector<int> v;
     for(int i = 0 ; i < 20 ;i++)
     {
        cout<<v.size() <<" "<<v.capacity()<<endl;
        v.push_back(i);
     }
    
    return 0;
}