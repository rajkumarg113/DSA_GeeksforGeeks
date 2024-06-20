class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int>root;
        double d=sqrt((b*b)-(4*a*c));
        if(d>=0)
        {
            int x1=floor((-b+d)/(2*a));
            int x2=floor((-b-d)/(2*a));
            if(x1>=x2)
            {
                root.push_back(x1);
                root.push_back(x2);
            }
            else
            {
                root.push_back(x2);
                root.push_back(x1);
            }
        }
        else
        {
            root.push_back(-1);
            return root;
        }
    }
};