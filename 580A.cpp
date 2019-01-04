#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a;
    cin>>a;
    int m=a,cnt=1,max_cnt=1;
    for(int i=1;i<t;i++)
    {

        cin>>a;
        if(m>a)
            cnt=1,m=a;
        else cnt++,m=max(m,a);
        max_cnt=max(max_cnt,cnt);

    }
    cout<<max_cnt;
    return 0;
}

