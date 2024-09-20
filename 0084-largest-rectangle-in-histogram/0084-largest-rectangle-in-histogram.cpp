class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int n=a.size();
        vector<int> lfs(n,0);
        vector<int> rfs(n,n-1);
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && a[s.top()]>=a[i])
            s.pop();
            if(!s.empty())
            lfs[i]=s.top()+1;
            s.push(i);
        }
        while(!s.empty())
        {
            s.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && a[s.top()]>=a[i])
            s.pop();
            if(!s.empty())
            rfs[i]=s.top()-1;
            s.push(i);

        }
        int maxArea=0;
        for(int i=0;i<n;i++)
        {
            maxArea=max(maxArea,a[i]*(rfs[i]-lfs[i]+1));
        }
    return maxArea;
    }
};