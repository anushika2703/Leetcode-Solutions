class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int>prefix(n,1);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        } 
        unordered_map<int,int>mpp;
        for(int j=0;j<n;j++){
            if(prefix[j]==k) count++;
            int val=prefix[j]-k;
            if(mpp.find(val)!=mpp.end()){
                count+=mpp[val];
            }
            if(mpp.find(prefix[j])==mpp.end()){
                mpp[prefix[j]]=0;
            }
            mpp[prefix[j]]++;
        }
        return count;
    }
};