class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        int count=0;
        while(n)
        {
            if(n&1)
            {
                count++;
                if(count>=2)
                    return false;
            }
            else
                count=0;
            n>>=1;
        }
        return true;
    }
};