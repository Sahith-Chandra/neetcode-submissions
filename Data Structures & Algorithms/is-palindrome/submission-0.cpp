class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            while (l < r && !alphaNum(s[l])) { //increment if not a letter/num
                l++;
            }
            while (r > l && !alphaNum(s[r])) { //increment if not a letter/num
                r--;
            }
            while (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    bool alphaNum(char c) {
        return  (c >= 'A' && c <= 'Z') ||
                (c >= 'a' && c <= 'z') ||
                (c >= '0' && c <= '9');
    }
};
