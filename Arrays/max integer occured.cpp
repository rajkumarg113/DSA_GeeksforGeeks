int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        int arr[100000];
        memset(arr,0,sizeof arr);
        for(int i=0;i<n;i++)
        {
            arr[l[i]]+=1;
            arr[r[i]+1]-=1;
        }
        int maxCount=arr[0],index=0;
        for(int i=1;i<maxx;i++)
        {
            arr[i]+=arr[i-1];
            if(arr[i]>maxCount)
            {
                maxCount=arr[i];
                index=i;
            }
        }
        return index;
    }