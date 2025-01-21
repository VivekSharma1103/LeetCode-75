class Solution {
public:
    string reverseWords(string s) {
      vector<string> words;
      string str = "";
     for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
        
        if (!str.empty()) {
            words.push_back(str);
            str = "";
        }
    } else {
    
        str += s[i];
    }
}


if (!str.empty()) {
    words.push_back(str);
}

      int i=0;
      int j = words.size()-1;

      while(i<j)
      {
        swap(words[i],words[j]);
        i++;
        j--;
      }
     str="";

     for(int i=0;i<words.size()-1;i++)
     {
        str+=words[i];
        str+=" ";
     }
     str+=words[words.size()-1];
       return str;
    }

};
