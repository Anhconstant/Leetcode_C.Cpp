/*
leetcode//problems//clear-digits
*/
class Solution {
public:
    string clearDigits(string s) {
        string ans="";
        int index = 0;
        for(int i=s.length()-1 ;i>=0;i--){
            if( isdigit(s[i])  )  {
                index ++;
            }
            else if(index){
                index --;
            }   
            else ans=s[i]+ans;
        }
        return ans;
    }
};