class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            while(j<t.length()){
                if(s[i]==t[j]){
                    j++;
                    count++;
                    break;
                }
                j++;
            }
        }
        if(count == s.length()) return true;
        else return false;
    }
};
