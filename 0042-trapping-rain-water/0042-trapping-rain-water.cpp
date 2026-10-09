class Solution {
public:
    int trap(vector<int>& height) {
      int lmax=0,rmax=0;
      int n=height.size();
      int left=0,right=n-1;
      int maxwater=0;
      while(left<right){
        lmax=max(lmax,height[left]);
        rmax=max(rmax,height[right]);
        if(min(lmax,rmax)==lmax){
            maxwater+=lmax-height[left];
            left++;
        } else{
            maxwater+=rmax-height[right];
            right--;
        }
      }  
      return maxwater;
    }
};