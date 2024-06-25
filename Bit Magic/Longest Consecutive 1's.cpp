class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int count=0,res=0;
        while(N)
        {
            if(N&1)
                count++;
            else
                count=0;
            
            res=max(res,count);
            N>>=1;
        }
        return res;
    
    }
};