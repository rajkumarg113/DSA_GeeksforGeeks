//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

// } Driver Code Ends
class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    
    
    
    vector<int> mergeTwo(vector<int>& A, vector<int>& B)
    {
        vector<int> ans;
        int i=0, j=0;
        while(i<A.size() && j<B.size())
        {
            if(A[i]<=B[j])
                ans.push_back(A[i++]);
            else
                ans.push_back(B[j++]);
        }
        
        while(i<A.size())
            ans.push_back(A[i++]);
        while(j<B.size())
            ans.push_back(B[j++]);
        return ans;
    }
    vector<int>mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        vector<int> sub_merge, ans;
        sub_merge=mergeTwo(A,B);
        ans=mergeTwo(sub_merge, C);
        return ans;

    } 

};

//{ Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 

// } Driver Code Ends