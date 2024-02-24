#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr,int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int min_id = i;
        for(int j = i+1; j < n ;j++)
        {
            if(arr[j] < arr[min_id])
            min_id = j;
        }
        swap(arr[i],arr[min_id]);
    }
}

int main()
{
    vector<int> arr(5);
    arr = {2,5,1,4,3};
    selectionSort(arr,5);
     for( auto x : arr)
     cout<<x<<" ";
     cout<<endl;
    return 0;
}