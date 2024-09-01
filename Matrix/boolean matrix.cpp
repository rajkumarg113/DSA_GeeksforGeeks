//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int rows=matrix.size();
        int cols=matrix[0].size();
        bool colset=false;
        for(int i=0;i<rows;i++)
        {
            if(matrix[i][0]==1)
                colset=true;
            for(int j=1;j<cols;j++)
            {
                if(matrix[i][j]==1)
                    matrix[i][0]=matrix[0][j]=1;
            }
        }
        
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=cols-1;j>0;j--)
            {
                if(matrix[i][0]==1 || matrix[0][j]==1)
                {
                    matrix[i][j]=1;
                }
            }
        }
        if(colset){
                for(int i=0;i<rows;i++)
                    matrix[i][0]=1;}
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends