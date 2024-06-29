class Solution {
  public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        
        if(n==0)
            return 0;
        int step=toh(n-1,from,aux,to);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        step+=toh(n-1,aux,to,from);
        return step+1;
        
    }
};