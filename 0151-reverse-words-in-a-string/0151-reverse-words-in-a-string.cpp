class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string res;
        int i=0;

        while(i<n){

            while(i<n && s[i]==' ') i++;
            if (i >= n) break;

            int j=i;

            while(j<n && s[j]!=' ') j++;

            string word=s.substr(i,j-i);

            if(res.length()==0){
                res=word;
            } 
            else{
                res=word + " " + res;
            }

            i=j;
        }

        return res;

        
    }
};