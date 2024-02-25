#include<bits/stdc++.h>
using namespace std;

long long merge2arrays(vector<long long> &arr,vector<long long> &left,vector<long long> &right)
{
    int i =0, j =0 ,k =0;
    int n1 = left.size();
    int n2 = right.size();
    long long ans=0;
    while( i < n1 and j < n2 )
    {
      if(left[i] <= right[i])
      {
        arr[k] = arr[i];
        i++;
      }
      else
      {
        arr[k] = arr[j];
        ans +=n1-i;
        j++;
      }
      k++;
    }
    while( i < n1)
    {
        arr[k++] = arr[i++];
    }
    while( j < n2)
    {
        arr[k++] = arr[j++];
    }
    return ans;
}

long long inversioncount(vector<long long> &arr)
{
    int n = arr.size();
  if( n == 1)
  return 0;
  vector<long long> left(arr.begin() , arr.begin() + n/2);
  vector<long long> right(arr.begin() + n/2 , arr.end());
  return inversioncount(left)  + inversioncount(right) + merge2arrays(arr,left,right);
}

int main()
{
    vector<long long> arr(5);
    arr = {5,3,2,4,1};
    cout<< inversioncount(arr);
    cout<<endl;
    return 0;
}

//https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1