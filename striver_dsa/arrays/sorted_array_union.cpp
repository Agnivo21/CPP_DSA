#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i = 0 ;
    int j = 0 ;
    vector<int> union_array;
    while( i < a.size() && j < b.size())
    {
        if(a[i] <= b[j])
        {
            if( union_array.size() == 0 || union_array.back() != a[i] )
            {
                union_array.push_back(a[i]);
            }
            i++;
        }
        else
        {  
            if( union_array.size() == 0 || union_array.back() != b[j] )
            {
                union_array.push_back(b[j]);
            }
            j++;
        }
    }
    while( i < a.size())
    {
       if( union_array.size() == 0 || union_array.back() != a[i] )
        {
            union_array.push_back(a[i]);
        }
            i++;
    }
    while( j < b.size())
    {
        if( union_array.size() == 0 || union_array.back() != b[j] )
            {
                union_array.push_back(b[j]);
            }
            j++;
    }
    return union_array;
}


int main()
{
    int n , m ;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n;i++)
    cin >> a[i];
    for(int i = 0; i < m;i++)
    cin >> b[i];
    vector<int> res;
    res = sortedArray(a,b);
    for(int i = 0 ; i < res.size();i++)
    {
        cout << res[i] <<" ";
    }
    return 0;
}