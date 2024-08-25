int l=0,r=n-1;
        while(l<=r)
        {
            int p=partition(arr,l,r);  //lomuto partition
            if(p==k-1)
                return arr[p];
            else if(p<k-1)
                l=p+1;
            else
                r=p-1;
        }
        return -1;