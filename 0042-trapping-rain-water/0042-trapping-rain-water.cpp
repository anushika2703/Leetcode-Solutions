class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       vector<int>lmax(n,0);
       vector<int>rmax(n,0);
       int maxwater=0;
       lmax[0]=height[0];
       rmax[n-1]=height[n-1];
       for(int i=1;i<n;i++){
         if(height[i]>lmax[i-1]) lmax[i]=height[i];
         else lmax[i]=lmax[i-1];
       }
       for(int j=n-2;j>=0;j--){
          if(height[j]>rmax[j+1]) rmax[j]=height[j];
          else rmax[j]=rmax[j+1];
       } 
       for(int k=0;k<n;k++){
        int curr=min(lmax[k],rmax[k])-height[k];
        maxwater+=curr;
       }
       return  maxwater;
    }
};