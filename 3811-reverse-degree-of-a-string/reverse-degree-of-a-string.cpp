class Solution {
public:
int NUM=31;
    int reverseDegree(string s) {
        int n=s.length();
        int op=0;
        for (int i=0;i<n;i++){
            int a = 27-(s[i] & NUM);
            op=op+(a*(i+1));
        }
        return op;
    }
};