class Solution {
public:
    void generateParenthesishelp(int open,int close,string s,vector<string>& ans){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            string curr=s+'(';
            generateParenthesishelp(open-1,close,curr,ans);
        }
         if(open<close){
            string curr=s+')';
            generateParenthesishelp(open,close-1,curr,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        generateParenthesishelp(n,n,s,res);
        return res; 
    }
};