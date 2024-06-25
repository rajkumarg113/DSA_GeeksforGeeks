class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        
        // Your code here
        return (n^(n>>1));
        
    }
};