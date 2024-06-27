bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int row=mat.size(),col=mat[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int pre_row=i-1,pre_col=j-1;
           if(pre_row>=0 && pre_col>=0)
            {
            if(mat[i][j]!=mat[pre_row][pre_col])
                return false;
            }
        }
    }
        return true;
    
}