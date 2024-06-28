class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       long long m=1000000007;
       long long res=1;
        while(R)
        {
            
            if(R%2==1)
            {
                res=(res*N)%m;
            }
            N=((N%m)*(N%m))%m;
            R=R/2;
        }
        return res%m;
        
    }

};