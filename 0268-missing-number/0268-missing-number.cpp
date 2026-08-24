class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorr=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            xorr^=i;
            xorr^=nums[i];
        }
        xorr^=n;
        return xorr;
    }
};