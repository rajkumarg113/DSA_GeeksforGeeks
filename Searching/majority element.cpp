int majorityElement(int a[], int size)
    {
        
        // your code here
        int idx=0,count=1;
        for(int i=1;i<size;i++)
        {
            if(a[i]==a[idx])
                count++;
            else
                count--;
            if(count==0)
            {
                idx=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==a[idx])
                count++;
            if(count>(size/2))
                return a[idx];
        }
        return -1;