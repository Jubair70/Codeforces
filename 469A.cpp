#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,q,col[n+1];
    cin>>p;
    memset(col,0,sizeof(col));
    for(int i=0;i<p;i++)
    {
        int s;
        cin>>s;
        col[s]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int s;
        cin>>s;
        col[s]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(col[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}



