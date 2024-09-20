//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string ans="";
        unordered_map<char,int>mp;
        for(int i=0;i<s2.length();i++)
                mp[s2[i]]=1;
        for(int i=0;i<s1.length();i++)
        {
            if(mp.find(s1[i])==mp.end())
                ans+=s1[i];
            else
                mp[s1[i]]=2;
        }
        for(int i=0;i<s2.length();i++)
        {
            if(mp[s2[i]]==1)
                ans+=s2[i];
        }
        if(ans.size()==0)
        {
                ans="-1";
                return ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends