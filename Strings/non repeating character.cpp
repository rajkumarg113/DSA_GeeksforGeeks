int count[CHAR]={0};
        for(int i=0;i<S.length();i++)
            count[S[i]]++;
        for(int i=0;i<S.length();i++)
        {
            if(count[S[i]]==1)
                return S[i];
        }
        return '$';