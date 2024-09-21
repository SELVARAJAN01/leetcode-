class Solution {
public:
    void backtrack(int start,vector<int>& comb,vector<vector<int>>& res,vector<int>& candidates,int target){
        if(target<0)
        return;
        if(target==0)
        {
            res.push_back(comb);
            return;
        }
        for(int i=start;i<candidates.size();i++)
        {
            comb.push_back(candidates[i]);
            backtrack(i,comb,res,candidates,target-candidates[i]);
            comb.pop_back();
        } 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>res;
    vector<int>comb;
    backtrack(0,comb,res,candidates,target);
    return res;
    }
};