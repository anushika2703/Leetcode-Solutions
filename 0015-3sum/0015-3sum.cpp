class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
       if(num.size()<3) return {};
       sort(num.begin(),num.end());
       set<vector<int>>result;
       for(int i=0;i<num.size();i++){
          int left=i+1;
          int right=num.size()-1;
          while(left<right){
              int sum=num[i]+num[left]+num[right];
              if(sum==0){
                 result.insert({num[i],num[left],num[right]});
                 left++;
                 right--;
              }else if(sum<0){
                left++;
              }else{
                right--;
              }
            }
        } 
     return vector<vector<int>>(result.begin(),result.end());  
    }
};