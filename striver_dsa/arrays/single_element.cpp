#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	

    // ********o(N)********


   int len = arr.size();
   int xor1 = 0;
    for(int i = 0 ; i < len ;i++)
    {
      xor1 ^= arr[i];
    }
    return xor1; 

    // *********o(logn)***********
    
	// int len = arr.size();
	// if(len == 1) return arr[0];
	//  for(int i = 0; i < len ; i+=2)
	//  {
	// 	 if(arr[i] != arr[i+1])
	// 	 return arr[i];
	//  }
    // return -1;
}


int main()
{
   int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =  0;  i < n ; i++)
    cin >> arr[i];
    cout<< getSingleElement(arr);
    return 0;
}