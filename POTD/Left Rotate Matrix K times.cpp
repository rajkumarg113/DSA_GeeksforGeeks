class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n=k%(mat[0].size());
        for(int i=0;i<mat.size();i++)
        {
            reverse(mat[i].begin(),mat[i].begin()+n);
            reverse(mat[i].begin()+n,mat[i].end());
            reverse(mat[i].begin(),mat[i].end());
        }
        return mat;
    }
};