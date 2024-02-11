#include<bits/stdc++.h>
using namespace std;
/*
Three pointers (i, j, and k) are initialized to point to the first element of arrays A, B, and C, respectively.
An ArrayList named res is created to store the common elements found in the three arrays.
A variable last is initialized with Integer.MIN_VALUE. This variable is used to keep track of the last checked common element to avoid duplicates.
A while loop is employed to iterate through the arrays until 
any of the three arrays (A, B, C) reaches its end.
Inside the loop, there is a conditional check to 
determine if the current elements of all three arrays are equal and 
not the same as the last checked element (A[i] == B[j] && A[i] == C[k] && 
A[i] != last).
If the condition is true:

The common element (A[i]) is added to the result ArrayList (res).
The last variable is updated to the current common element.
Pointers (i, j, k) are incremented to move to the next element in each array.
If the current element of array A is the smallest among the three, 
the pointer for array A (i) is incremented.
If the current element of array B is the smallest among the three, 
the pointer for array B (j) is incremented.
If the current element of array C is the smallest among the three, 
the pointer for array C (k) is incremented.
Once the loop ends, the function returns the ArrayList (res) 
containing the common elements found in all three arrays.
*/
class Solution
{
    public:
        // Function to find common elements in three arrays.
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            // Initializing variables i, j, k to track array indices.
            int i = 0, j = 0, k = 0;
            
            // Initializing vector to store common elements.
            vector <int> res;
            
            // Initializing variable last to track previous common element.
            int last = INT_MIN;
            
            // Loop until reach the end of any array.
            while (i < n1 and j < n2 and k < n3)
            {
                // If current elements in all arrays are equal and not the same as the previous common element.
                if (A[i] == B[j] and A[i] == C[k] and A[i] != last) 
                {
                    // Add common element to the result vector.
                    res.push_back (A[i]);
                    
                    // Update last variable to current common element.
                    last = A[i];
                    
                    // Move to next elements in all arrays.
                    i++;
                    j++;
                    k++;
                }
                // Move to the next smallest element among the three arrays.
                else if (min ({A[i], B[j], C[k]}) == A[i]) i++;
                else if (min ({A[i], B[j], C[k]}) == B[j]) j++;
                else k++;
            }
            
            // Return the result vector with common elements.
            return res;
        }
};