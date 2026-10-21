class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int val = target-nums[i];
            if(mpp.find(val)!=mpp.end()&& mpp[val]!=i){
                return {mpp[val],i};
            }
        }
        return {};
    }
};