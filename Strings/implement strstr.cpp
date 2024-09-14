//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int sLen=s.size(),xLen=x.size();
     for(int i=0;i<sLen;i++)
     {
         bool flag=true;
         for(int j=0;j<xLen;j++)
         {
             if(x[j]!=s[i+j])
             {
                 flag=false;
                break; 
             }
         }
         if(flag)
            return i;
     }
     return -1;
}