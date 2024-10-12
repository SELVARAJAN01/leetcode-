class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
       int flag=0;
       set<string>s;
       for(auto word: wordList)
       {
        if(endWord.compare(word)==0)
            flag=1;
        s.insert(word);
       }
       if(flag==0)
        return 0;
    queue<string>q;
    int level=0;
    q.push(beginWord);
    while(!q.empty())
    {
        level+=1;
        int lssize=q.size();
        while(lssize--)
        {
            string curr=q.front();
            q.pop();
            for(int i=0;i<curr.size();i++)
            {
                string temp=curr;
                for(char c='a';c<='z';c++)
                {
                    temp[i]=c;
                    if(temp.compare(endWord)==0)
                      return level+1;
                    if(temp.compare(curr)==0)
                      continue;
                    if(s.count(temp))
                      q.push(temp);
                    s.erase(temp);
                }
            }
        }
    }
    return 0;
    }
};