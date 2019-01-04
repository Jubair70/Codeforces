#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,res=INT_MAX;
    cin>>n>>m;
    int arr[m+1];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    for(int i=0;i<=m-n;i++)
        res=min(res,arr[i+n-1]-arr[i]);
    cout<<res<<endl;
    return 0;
}
