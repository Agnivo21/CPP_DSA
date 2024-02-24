#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr,int n)
{
/*
    arr[1] -> [0, .. ,  0]
    arr[2] -> [0, .. , 1]
    arr[3] -> [0, .. , 2]
    ...
    arr[n-1] -> [0, .. , n - 2]
*/
    for(int i = 1; i < n ;i++)
    {
        int num = arr[i];
        int j = i-1;
        while( j >= 0 && arr[j] > num)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = num;
    }
}

int main()
{
    vector<int> arr(5);
    arr = {2,5,1,4,3};
    insertionSort(arr,5);
     for( auto x : arr)
     cout<<x<<" ";
     cout<<endl;
    return 0;
}