#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr,int n)
{
    for(int i = 0 ; i < n - 1;i++)
    {
        bool isswap = false;
        for( int j = 0 ; j < n - 1 -i;j++)
        {
            if(arr[j + 1] < arr[j])
            {
                swap(arr[j+1],arr[j]);
                isswap = true;
            }
        }
         if(!isswap) break;
    }
}

int main()
{
    vector<int> arr(5);
    arr = {2,5,1,4,3};
    bubbleSort(arr,5);
     for( auto x : arr)
     cout<<x<<" ";
     cout<<endl;
    return 0;
}