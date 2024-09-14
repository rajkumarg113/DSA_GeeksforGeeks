//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    const int CHAR=26;
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size()!=str2.size())
            return false;
        int count1[CHAR]={0};
        int count2[CHAR]={0};
        for(int i=0;i<str1.length();i++)
        {
            count1[str1[i]-'a']++;
            count2[str2[i]-'a']++;
        }
        for(int i=0;i<str1.length();i++)
        {
            if(count1[str1[i]-'a']!=count2[str2[i]-'a'])
                return false;
        }
        return true;
        
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends