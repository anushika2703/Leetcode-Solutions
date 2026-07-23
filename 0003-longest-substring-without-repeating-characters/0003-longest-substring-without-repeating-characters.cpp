class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char>set;
       int right=0;
       int left=0;
       int maxlen=0;
       while(right<s.length()){
         if(!set.count(s[right])){
            set.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
            right++;
         }
         else{
            set.erase(s[left]);
            left++;
          }
       }
       return maxlen;
    }
};