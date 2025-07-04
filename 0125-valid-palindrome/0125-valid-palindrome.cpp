class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
         

     
             string cleaned = "";

        // Step 1: Clean the string
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        int right=cleaned.length()-1;
          

       
        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

};