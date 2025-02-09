//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
        int ind = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int sid = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        sid--;
        int first=-1,last=-1;
        if(ind !=nums.size() && nums[ind]==target){
             first=ind;
        }
        if(sid>=0 && nums[ind]==target){
         last=sid;
        }
    if(first==-1){
        return 0;
    }  
    return (last-first)+1;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends