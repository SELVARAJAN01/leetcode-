class Solution {
public:
    bool isAnagram(string s, string t) { 
       if(s.size()!=t.size())
          return false;
        int mapS[26]={0},mapT[26]={0};
        for(int i=0;i<s.length(); i++)
        {
            mapS[s[i]-97]++;
            mapT[t[i]-'a']++;

        }
        for(int i=0; i<26; i++)
        {
            if(mapS[i]!=mapT[i])
              return false;
        }
        return true;

    }
};