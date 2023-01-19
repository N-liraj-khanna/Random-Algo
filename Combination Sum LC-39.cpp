// tc=o(2^t*k)
// sc=o(k*x) unpredictable
class Solution {
public:
    void solve(int sum, int ind, int t, vector<int> temp, vector<int>& nums, vector<vector<int>>& res){
        if(sum==t){
            res.push_back(temp);
            return;
        } 
        if(sum>t) return;
        for(int i=ind;i<nums.size();i++){
            temp.push_back(nums[i]);
            solve(sum+nums[i], i,t,temp,nums,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(0, 0,t,temp,nums,res);
        return res;
    }
};