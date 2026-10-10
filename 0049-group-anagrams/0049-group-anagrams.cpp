class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>>mpp;
        int n=s.size();
        for(int i=0;i<n;i++){
           string k=s[i];
           sort(k.begin(),k.end());
           mpp[k].push_back(s[i]);
        }
        vector<vector<string>>ans;
        for(auto  it:mpp){
           ans.push_back(it.second);
        }
        return ans;
    }
};