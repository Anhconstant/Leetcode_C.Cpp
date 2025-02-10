/*
leetcode.com/problems/valid-parentheses

using map and vector

*/

class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;
        if(s.length() %2 ==1) return false;

        map<char,char> mp = { {'{','}'} , {'[',']'} , {'(',')'}}; 
        vector<char> v;
        for(int i=0;i<s.length();i++){
            if(v.empty() || mp[v.back()] != s[i] ) v.push_back(s[i]);
            else v.pop_back();
        }
        if(v.empty()) return true;
        return false;
    }
};