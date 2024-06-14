int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        pair<int,int>p={0,0};
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            int j=1;
            while(j*i<=n)
            {
                s+=(j*i);
                j++;
            }
            if(s>p.first)
            {
                p.second=i;
                p.first=s;
            }
            s=0;
        }
        cout<<p.second<<endl;
    }
    return 0;
}