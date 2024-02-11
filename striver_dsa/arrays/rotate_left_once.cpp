#include <bits/stdc++.h> 
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int first_ele = arr[0];
    for(int i = 0 ; i < n-1; i++)
    {
      arr[i] = arr[i+1];
    }
    arr[n-1]  = first_ele;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =  0;  i < n ; i++)
    cin >> arr[i];
    rotateArray(arr,n);
    for(int i =  0;  i < n ; i++)
    cout << arr[i] <<" ";
}
