class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size();
      int left=0,right=n-1;
      int water=0;
      while(left<right){
        int h=min(height[left],height[right])*(right-left);
        water=max(water,h);
        if(height[left]>height[right]) right--;
        else left++;
      }
      return water;  
    }
};