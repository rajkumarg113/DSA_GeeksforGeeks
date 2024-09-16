//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>mp;
        for(int i=0;i<str.length();i++)
            mp[str[i]]++;
        char maxChar;
        int count=-1;
        for(auto e:mp)
        {
            if(e.second>count)
            {
                maxChar=e.first;
                count=e.second;
            }
        }
        return maxChar;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends