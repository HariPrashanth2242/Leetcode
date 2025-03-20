class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0, maxLength = 0, maxFreq = 0;
        unordered_map<char, int> charIndexMap; 

        for (int end = 0; end < s.length(); end++) {
            charIndexMap[s[end]]++;
            maxFreq = max(maxFreq, charIndexMap[s[end]]);
            
            if ((end - start + 1) - maxFreq > k) {
                charIndexMap[s[start]]--;
                start++;
            }
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
