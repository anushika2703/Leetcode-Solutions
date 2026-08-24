class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int add=n*(n+1)/2;
        for(int i=0;i<n;i++){
            add-=nums[i];
        }
        return add;
    }
};