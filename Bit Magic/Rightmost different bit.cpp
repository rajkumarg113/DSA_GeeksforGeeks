class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if (m==n)
            return -1;
        int xor_res=m^n;
        int ans=1;
        while(xor_res)
        {
            if(xor_res & 1)
                return ans;
            ans++;
            xor_res>>=1;
        }
            
    }
};