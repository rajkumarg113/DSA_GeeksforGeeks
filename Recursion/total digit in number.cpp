class Solution{
  public:
    //Complete this function
    int countDigits(int n)
    {
       //Your code here
       if(n==0)
        return 0;
        return 1+countDigits(n/10);
    }
};