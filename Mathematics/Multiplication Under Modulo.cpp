class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        long long M=1000000007;
        return ((a%M)*(b%M))%M;
    }
};