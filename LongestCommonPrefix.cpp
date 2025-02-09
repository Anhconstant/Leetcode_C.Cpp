
/*  leetcode // problems // longest-common-prefix  */


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res_ = "";
        if(strs.empty()) return res_;
        for(int i=0; i< strs[0].length();i++){
            char d = strs[0][i];
            for(int j=0;j<strs.size();j++){
                if( i >= strs[j].length() || strs[j][i] != d ) return res_;
            }
            res_+= d;
        }   
        return res_;
    }
};


/* ====================================== */