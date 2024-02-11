#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    // tc = o(m+n) sc = (1)


    int i = m-1, j = n-1, k = m + n -1;

    while( i >= 0 && j >= 0)
    {
        if(nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--]; 
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }
    while( j >= 0)
    {
        nums1[k--] = nums2[j--];
    }

    //t.c = o(m+n) s.c = 0(m +n)

     /*
     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> aux;
    int i = 0, j = 0;

    while(i < m and j < n) {
        if(nums1[i] < nums2[j])
            aux.push_back(nums1[i++]);
        else
            aux.push_back(nums2[j++]);
    }

    while(i < m)
        aux.push_back(nums1[i++]);

    while(j < n)
        aux.push_back(nums2[j++]);

    nums1 = aux;
    }
*/        
}

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    vector<int> num1(m +n,0);
    vector<int> num2(n);

    for( int i  = 0 ; i < m; i++)
      {
        cin >> num1[i];
      }
    for( int i  = 0 ; i < n ; i++)
    {
        cin >> num2[i];
    }
    merge(num1,m,num2,n);
    for( int i  = 0 ; i < m+n ; i++)
    {
        cout << num1[i] << " ";
    }
    return 0;
}