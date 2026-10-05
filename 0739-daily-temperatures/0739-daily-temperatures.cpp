class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ans(n,0);
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=temp[i]) st.pop();
            if(st.empty()) st.push({temp[i],i});
            else{
                int j=st.top().second;
                st.push({temp[i],i});
                ans[i]=j-i;
            }
        }
        return ans;
    }
};