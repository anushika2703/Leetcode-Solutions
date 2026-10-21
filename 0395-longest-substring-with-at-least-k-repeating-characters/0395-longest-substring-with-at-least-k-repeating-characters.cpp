class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans=0, n=s.size();
        for(int target=1;target<=26;target++){
             int left=0, right =0;
             int distinct =0, atmost=0;
            int freq[26]={0};
            while(right<n){
                int idx=s[right]-'a';
                if(freq[idx]==0){
                    distinct++;
                }
                freq[idx]++;
                if(freq[idx]==k) atmost++;
                right++;
                while(target<distinct){
                    int lidx=s[left]-'a';
                    if(freq[lidx]==k) atmost--;
                    freq[lidx]--;
                    if(freq[lidx]==0) distinct--;
                    left++;
                }
                if(distinct==target && distinct==atmost){
                    ans=max(ans,right-left);
                }
            }
        }
        return ans;
    }
};