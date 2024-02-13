#include<bits/stdc++.h>
using namespace std;


void rotate(int arr[], int n)
{
    int first_pos = arr[n-1];
    for(int  i = n-1 ; i >= 1 ;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = first_pos;
}