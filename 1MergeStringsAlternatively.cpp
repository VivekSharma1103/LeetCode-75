// q1. LeetCode 75

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int i = 0, j = 0;

        
        while (i < word1.length() || j < word2.length()) {
            if (i < word1.length()) {
                str += word1[i];
                i++;
            }
            if (j < word2.length()) {
                str += word2[j];
                j++;
            }
        }
        return str;
    }
};
