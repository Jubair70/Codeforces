#include<bits/stdc++.h>
using namespace std;
int col[100001];
int main()
{
    int a[4],s,cnt=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>s;
    sort(a,a+4);
    for(int i=1;i<=s;i++)
    {
        if(!col[i])
        {
            if(i%a[0]==0)
                col[i]=1,cnt++;
        }
    }
    if(cnt>=s)
    {
        cout<<cnt<<endl;
        return 0;
    }
    for(int i=1;i<=s;i++)
    {
        if(!col[i])
        {
            if(i%a[1]==0)
                col[i]=1,cnt++;
        }
    }
    if(cnt>=s)
    {
        cout<<cnt<<endl;
        return 0;
    }
    for(int i=1;i<=s;i++)
    {
        if(!col[i])
        {
            if(i%a[2]==0)
                col[i]=1,cnt++;
        }
    }
    if(cnt>=s)
    {
        cout<<cnt<<endl;
        return 0;
    }
    for(int i=1;i<=s;i++)
    {
        if(!col[i])
        {
            if(i%a[3]==0)
                col[i]=1,cnt++;
        }
    }
    if(cnt>=s)
    {
        cout<<cnt<<endl;
        return 0;
    }
    cout<<cnt;
    return 0;
}


