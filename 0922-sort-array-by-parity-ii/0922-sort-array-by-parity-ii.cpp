class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int i=0,j=0,k=0;
        while(i<even.size() && j<odd.size()){
            nums[k++]=even[i++];
            nums[k++]=odd[j++];
        }
        return nums;
 
    }
};