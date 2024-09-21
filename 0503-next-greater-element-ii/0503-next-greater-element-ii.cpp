class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
    stack<int>s;
    int n=a.size();   
    vector<int>res(n,-1);
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()<=a[i])
            s.pop();
        if(!s.empty())
            res[i]=s.top();
        s.push(a[i]);
        }
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()<=a[i])
           s.pop();
        if(!s.empty())
           res[i]=s.top();
        s.push(a[i]);
    }
    return res;
    }
};