class Solution {
public:
    void backtrack(int start,int n ,vector<int>& comb,vector<vector<int>>& res,int target){
        if(comb.size()==n)
        {
            if(target==0){
            res.push_back(comb);
            return;
        }
        else
        return;
        }
        for(int i=start;i<=9;i++)
        {
            comb.push_back(i);
            backtrack(i+1,n,comb,res,target-i);
            comb.pop_back();
        } 
    }
    vector<vector<int>> combinationSum3(int n, int target) {
    vector<vector<int>>res;
    vector<int>comb;
    backtrack(1,n,comb,res,target);
    return res;    
    }
};