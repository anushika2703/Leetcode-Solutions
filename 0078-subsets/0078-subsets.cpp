class Solution {
public:
    void solve(int idx, vector<int>&nums, vector<int>&temp, vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        //don't take the element
        solve(idx+1,nums,temp,ans);
        //take the element
        temp.push_back(nums[idx]);
        solve(idx+1,nums,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,nums,temp,ans);
        return ans;     
    }
};