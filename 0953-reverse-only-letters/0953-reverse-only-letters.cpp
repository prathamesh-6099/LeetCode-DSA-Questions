class Solution {
public:
    string reverseOnlyLetters(string s) {
        int str = 0;
        int end = s.length() - 1;

        while (str < end) {
            if (!isalpha(s[str])) {
                str++;
            } else if (!isalpha(s[end])) {
                end--;
            } else {
                swap(s[str], s[end]);
                str++;
                end--;
            }
        }

        return s; // ⬅️ Move return statement outside the while loop
    }
};