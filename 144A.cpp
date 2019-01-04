#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mx=INT_MIN,mn=INT_MAX,max_in=0,min_in=0;
    cin>>t;
    int a[t];

    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(mx<a[i])
        {
            mx=a[i];
            max_in=i;
        }
        if(mn>=a[i])
        {
            mn=a[i];
            min_in=i;
        }
    }
    if(max_in>min_in)
        cout<<max_in+t-min_in-2;
    else cout<<max_in+t-min_in-1;
    return 0;
}

