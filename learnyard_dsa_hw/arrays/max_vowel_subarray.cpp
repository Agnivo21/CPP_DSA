
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check_vowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        return true;
        else
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int curr_vowel = 0;
        for(int i = 0 ; i <= k-1 ;i++)
        {
            if(check_vowel(s[i]))
            curr_vowel++;
        }
        int max_vowel = curr_vowel;
        for(int st = 1, end = k ; end < n ;st++ , end++)
        {
            if(check_vowel(s[st-1])) curr_vowel--;
            if(check_vowel(s[end])) curr_vowel++;
            max_vowel = max(curr_vowel,max_vowel);
        }
        return max_vowel;
    }
};