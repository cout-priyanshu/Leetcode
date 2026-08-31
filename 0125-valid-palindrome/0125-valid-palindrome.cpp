class Solution {
public:
    bool isPalindrome(std::string s) {
        string clean = "";
        for (char c : s) {
            if (std::isalnum(c)) {
                clean += tolower(c);
            }
        }
        string reversed_clean = clean;
        reverse(reversed_clean.begin(), reversed_clean.end());
        return clean == reversed_clean;
    }
};