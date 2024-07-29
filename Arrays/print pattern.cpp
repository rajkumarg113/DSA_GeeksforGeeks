class Solution{
public:


    void recFun(int N,vector<int>&res)
    {
        if(N<=0)
        {
            res.push_back(N);
            return ;
        }
         res.push_back(N);
         recFun(N-5,res);
         res.push_back(N);
    }


    vector<int> pattern(int N){
        // code here
        vector<int>res;
        recFun(N,res);
        return res;
        
    }
};