#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[10];
    memset(a,0,sizeof(a));
    for(int i=0;i<t;i++)
    {
        int s;
        cin>>s;
        a[s]++;
    }
    int cnt=0;
    cnt+=a[4];

    int tmp=min(a[1],a[3]);;
    cnt+=tmp;
    a[1]-=tmp;
    a[3]-=tmp;
    cnt+=a[2]/2;

    a[2]%=2;


    if(a[1])
    {

        int total=0;
        if(a[2])total+=2;
        total+=a[1];
        cnt+=total/4;
        total%=4;
        if(total)cnt++;
    }
    else if(a[3])
    {
        if(a[2])cnt++;
        cnt+=a[3];
    }
    else if(a[2]) cnt++;

    cout<<cnt<<endl;
    return 0;
}



