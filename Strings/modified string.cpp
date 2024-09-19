int n=a.length();
        int count=1,res=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
                count++;
            if(a[i]!=a[i-1])
                count=1;
            if(count>=3){
                res++;
                count=1;}
            
        }
        return res;