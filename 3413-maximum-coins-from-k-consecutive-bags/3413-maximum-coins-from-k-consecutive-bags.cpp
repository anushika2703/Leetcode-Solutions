class Solution {
public:
    long long maximumCoins(vector<vector<int>>& coins, int k) {
        sort(coins.begin(),coins.end());
        int n=coins.size();
        long long sum=0, ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            long long start=coins[i][0];
            long long end=start+k-1;
            while(j<n && coins[j][1]<=end){
                sum+=1LL*(coins[j][1]-coins[j][0]+1)*coins[j][2];
                j++;
            }
            long long curr=sum;
            if(j<n && coins[j][0]<=end){
                curr+=1LL*(end-coins[j][0]+1)*coins[j][2];
            }
            ans=max(ans,curr);
            if(j>i){
                sum-=1LL*(coins[i][1]-coins[i][0]+1)*coins[i][2];
            } else{
                j=i+1;
            }
        }
        reverse(coins.begin(),coins.end());
        sum=0;
        j=0;
        for(int i=0;i<n;i++){
            long long start=coins[i][1];
            long long end=start-k+1;
            while(j<n && coins[j][0]>=end){
                sum+=1LL*(coins[j][1]-coins[j][0]+1)*coins[j][2];
                j++;
            }
            long long curr=sum;
            if (j<n && coins[j][1]>=end){
                curr+=1LL*(coins[j][1]-end+1)*coins[j][2];
            }
            ans=max(ans,curr);
            if(j>i){
                sum-=1LL*(coins[i][1]-coins[i][0]+1)*coins[i][2];
            }else{
                j=i+1;
            }
        }
        return ans;
    }
};