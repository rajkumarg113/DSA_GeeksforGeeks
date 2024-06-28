class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
    {
        //Your code here
        if(p<=0)
        {
            return 1;
        }
        int tmp=RecursivePower(n,p/2);
        tmp=tmp*tmp;
        if(p%2)
            return tmp*n;
        else
            return tmp;
    }
};