class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
     vector<vector<int>> res;
     sort(a.begin(),a.end());
     int n=a.size();
     for(int i=0;i<n;i++)
     {
        if(res.empty()||a[i][0] > res.back()[1])
             res.push_back(a[i]);
        else
             res.back()[1]=max(res.back()[1],a[i][1]);
     } 
     return res;
    }
};