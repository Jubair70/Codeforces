#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin>>t;
    map<int,int>left;
    map<int,int>right;

    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(left[r]==1)cnt++;
        if(right[l]==1)cnt++;
        left[l]=1;
        right[r]=1;

    }
    cout<<"first"<<cnt<<endl;
    return 0;
}
