//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char>s1,s2;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]<='Z')
            {
                s1.push_back(str[i]-'a');
                str[i]='1';
            }
            else
            {
                s2.push_back(str[i]-'a');
                str[i]='2';
                
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int s=0,c=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='1')
            {
                str[i]=s1[s]+'a';
                s++;
            }
            else
            {
                str[i]=s2[c]+'a';
                c++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends