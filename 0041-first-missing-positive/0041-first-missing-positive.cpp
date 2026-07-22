class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        //Loop 1 : clean the array; all negative numbers or out of n numbers are turned with n+1;
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>n) nums[i]=n+1;
        }
        //Loop 2 : spot the numbers and make them negative;
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            if(num>n) continue;
            if(nums[num-1]>0)nums[num-1]=-nums[num-1];
        }
        //find the first missign positive;
        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
    }
};