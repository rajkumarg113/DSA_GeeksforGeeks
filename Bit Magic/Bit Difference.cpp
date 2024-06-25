class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic hereb
        if(a==b)
            return 0;
        int xor_res=a^b,count=0;
        while(xor_res)
        {
            xor_res=xor_res&(xor_res-1);
            count++;
        }
        return count;
        
    }
};