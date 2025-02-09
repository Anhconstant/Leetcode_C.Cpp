/*
    leetcode.com // problems // roman-to-integer/
    romanToInt not use map
*/

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = s.length()-1;i>=0;i-- ){
            switch(s[i]){
                case 'I':
                    sum+=1;
                    break;
                case 'V':
                    sum+=5;
                    if (i!=0) if(s[i-1] == 'I' ){
                        i--;
                        sum-=1;
                    }
                    break;
                case 'X':
                    sum+=10;
                    if (i!=0) if(s[i-1] == 'I'){
                        i--;
                        sum-=1;
                    }
                    break;
                case 'L':
                    sum+=50;
                    if (i!=0) if(s[i-1] == 'X'){
                        i--;
                        sum-=10;
                    }
                    break;
                case 'C':
                    sum+=100;
                    if (i!=0)if(s[i-1] == 'X'){
                        i--;
                        sum-=10;
                    }
                    break;
                case 'D':
                    sum+=500;
                    if (i!=0)if(s[i-1] == 'C'){
                        i--;
                        sum-=100;
                    }
                    break;
                case 'M':
                    sum+=1000;
                    if (i!=0)if(s[i-1] == 'C'){
                        i--;
                        sum-=100;
                    }
                    break;
            }
        }
        return sum;
    }
};