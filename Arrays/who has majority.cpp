int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int i,count_x=0,count_y=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==x)
                count_x++;
            if(arr[i]==y)
                count_y++;
        }
        if(count_x>count_y)
            return x;
        else if(count_y>count_x)
            return y;
        else 
            return (x<y?x:y);
    }