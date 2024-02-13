#include<bits/stdc++.h>
using namespace std;
//****** variable sliding window ************

int longestUniqueSubsttr(string s){
       int  final_len = 0;
       int n = s.length();
       vector<int> freq(26,0);
       int l = 0;
       for(int r = 0; r < n ; r++ )
       {
           int inx = s[r] - 'a';
           freq[inx]++;
           while(freq[inx] == 2)
           {
               freq[s[l] - 'a']--;
               l++;
           }
           final_len = max(final_len , r - l + 1);
       }
       return final_len;
}