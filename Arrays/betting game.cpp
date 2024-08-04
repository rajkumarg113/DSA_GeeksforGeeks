class Solution{
    public:
    
        int sum=4,betAmount=1;
        int betBalance(string result)
        {
            // code here
            for(int i=0;i<result.length();i++)
            {
                if(sum<betAmount)
                        return -1;
                if(result[i]=='W')
                {
                    sum+=betAmount;
                    betAmount=1;
                }
                else
                {
                    sum-=betAmount;
                    betAmount*=2;
                    
                }
            }
            return sum;
        }
};