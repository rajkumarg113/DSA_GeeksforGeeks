//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        string res="";
        vector<int>vec(27, 0);
        for(int i=0; i<arr.size(); i++)
            vec[arr[i]-'a']++;
        for(int i=0; i<27; i++)
        {
            if(vec[i] !=0)
            {
                for(int j=0; j<vec[i]; j++)
                    res += char(i + 'a');
            }
        }
        
        return res;
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
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends