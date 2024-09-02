//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    
    static bool myCmp(pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.second==p2.second)
            return p1.first<p2.first;
        return p1.second>p2.second;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        
        
        vector<int>res;
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
            ump[arr[i]]++;
        vector<pair<int,int>>vp(ump.begin(),ump.end());
        sort(vp.begin(),vp.end(),myCmp);
        
        for(auto p:vp)
        {
            for(int i=0;i<p.second;i++)
                res.push_back(p.first);
        }
        return res;
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends