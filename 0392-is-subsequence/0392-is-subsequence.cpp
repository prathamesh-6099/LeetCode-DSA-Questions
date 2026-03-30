class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;

        if(s==""){
            return true;
        }

        while(i<t.length()){

            if(t[i] == s[j]){
                j++;
            }

            if(j==s.length()){
                return true;
            }

            i++;
        }

        return false;


        
    }
};