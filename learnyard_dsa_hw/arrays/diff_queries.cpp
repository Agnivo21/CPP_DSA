#include<bits/stdc++.h>
using namespace std;
/*
Logic Discussion -
Let's divide the queries into three types:
	1. Add type query with negative X - call it decrement type
	2. Add type query with positive X - call it increment type
	3. Set type query

Now let's think about the case when the array has only one element.
In this case we need to maximize the element (lexicographically largest).

How can we do that?
	1. First we should apply the decrement type queries
	2. Then we should apply the set type queries in order of increasing value of X
		~ This will be equivalent to ignoring the decrement type queries and all the set queries with smaller values of X.
	3. Then apply increment type queries.

How can we use this method in case of any generic array?
If we maximize each element in the array, the array will automatically become lexicographically largest
So,we can follow the same procedure as above to get the final array

Time Complexity - O(Q*log(Q) + Q*N) ~ Very tight constraints but the solution passes
Space Complexity - O(N + Q*3)
*/
int main()
{
    int N,Q;
    cin >> N >> Q;
    vector<long long> arr(N);
    for(int i = 0 ; i < N ;i++)
    cin >> arr[i];

    vector<vector<int>> decrement_queries;
    vector<vector<int>> increment_queries;
    vector<vector<int>> set_queries;
    
    while(Q--)
    {
        int t,l,r,x;
        cin >> t;
        cin >> l >> r >> x;
        if( t == 1)
        {
            if(x < 0)
            decrement_queries.push_back({x,l,r});
            else
            increment_queries.push_back({x,l,r});
        }
        else
        set_queries.push_back({x,l,r});
    }
    sort(set_queries.begin(),set_queries.end());
    
    for( auto query : decrement_queries)
    {
        for(int i = query[1]-1 ; i < query[2];i++) arr[i] +=query[0];
    }
    for( auto query : set_queries)
    {
        for(int i = query[1]-1 ; i < query[2];i++) arr[i] =query[0];
    }
    for( auto query : increment_queries)
    {
        for(int i = query[1]-1 ; i < query[2];i++) arr[i] +=query[0];
    }

    for(int i=0 ; i < N; i++) cout<<arr[i]<<" ";
    

    return 0;
}