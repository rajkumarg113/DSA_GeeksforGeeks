//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    const int CHAR=26;
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        bool visited[MAX_CHARS]={false};
        int map[MAX_CHARS];
        memset(map,-1,sizeof(map));
        
        if(str1.size()!=str2.size())
            return false;
        for(int i=0;i<str1.size();i++)
        {
            if(map[str1[i]]==-1)
            {
                if(visited[str2[i]]==true)
                    return false;
                visited[str2[i]]=true;
                map[str1[i]]=str2[i];
                
            }
            else if(map[str1[i]]!=str2[i])
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