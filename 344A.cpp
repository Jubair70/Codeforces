#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int d,pre_d;
    cin>>d;
    a--;
    int cnt=1;
    pre_d=d;
    while(a--)
    {
        cin>>d;
        if(d!=pre_d)cnt++;
        pre_d=d;
    }
    cout<<cnt;
    return 0;
}

