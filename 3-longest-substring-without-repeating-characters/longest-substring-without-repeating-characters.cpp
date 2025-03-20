class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int maxLength = 0;
        unordered_map<char, int> charIndexMap; 
        if(s.length()==0) return 0;
        if(s.length()==1){
            return 1;
        }
        for (int end = 0; end < s.length(); end++) {
            
            if (charIndexMap.find(s[end]) != charIndexMap.end() && charIndexMap[s[end]] >= start) {
                start = charIndexMap[s[end]] + 1;
            }
            charIndexMap[s[end]] = end;
    maxLength=max(maxLength,end-start+1);
            
        }

        return maxLength;
    }
};