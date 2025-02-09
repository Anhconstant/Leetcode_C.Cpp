/* 
    leetcode // problems // palindrome-number/
*/
class Solution {
public:
    bool isPalindrome(int x) {
        long working = x;
        long reversed = 0;
        long last_digit;
        while (working > 0) {
            last_digit = working % 10;
            reversed = (reversed * 10) + last_digit;
            working = working / 10;
        }

        return (long)x == reversed;
    }
};