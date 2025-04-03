    #include<stdio.h>
    int main()
    {
        int n1,n2,temp;
        scanf("%d",&n1);
        int child[n1];
        for(int i=0;i<n1;i++)
        {
            scanf("%d",&child[i]);
        }
        scanf("%d",&n2);
        int cookie[n2];
        for(int i=0;i<n2;i++)
        {
            scanf("%d",&cookie[i]);
        }

        for(int i=0;i<n1;i++)
        {
            for(int j=i+1;j<n1;j++)
            {
                if(child[i]>child[j])
                {
                    temp=child[i];
                    child[i]=child[j];
                    child[j]=temp;
                }
            }
        }

        for(int i=0;i<n2;i++)
        {
            for(int j=i+1;j<n2;j++)
            {
                if(cookie[i]>cookie[j])
                {
                    temp=cookie[i];
                    cookie[i]=cookie[j];
                    cookie[j]=temp;
                }
            }
        }

        int count=0,child_count=0,cookie_count=0;
        while(child_count<n1 && cookie_count<n2)
        {
            if(cookie[cookie_count]>=child[child_count])
            {
                count++;
                child_count++;
            }
            cookie_count++;
        }

        printf("%d",count);
    }