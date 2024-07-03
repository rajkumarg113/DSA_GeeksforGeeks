int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        int lmin[n],rmax[n],ans=-1;
        lmin[0]=a[0],rmax[n-1]=a[n-1];
        for(int i=1;i<n;i++)
            lmin[i]=min(a[i],lmin[i-1]);
        for(int i=n-2;i>=0;i--)
            rmax[i]=max(a[i],rmax[i+1]);
            
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(lmin[i]<=rmax[j]){
                ans=max(ans,j-i);
                j++;}
                
            else
                i++;
        }
        return ans;
    }