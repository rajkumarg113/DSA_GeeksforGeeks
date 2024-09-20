//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    static void rev(string &s,int l,int h)
    {
        while(l<h)
        {
            swap(s[l],s[h]);
            l++;h--;
        }
    }
    
    
    string reverseWords(string str) {
        // code here
        int start=0;
        string S=str;
        for(int end=0;end<S.length();end++)
        {
            if(S[end]=='.'){
            rev(S,start,end-1);
            start=end+1;}
        }
        rev(S,start,S.length()-1);
        rev(S,0,S.length()-1);
    return S;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends