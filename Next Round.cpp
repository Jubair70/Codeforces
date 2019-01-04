#include<bits/stdc++.h>
using namespace std;
int n;

int main()
{
    int t,cnt=0;
    cin>>t>>n;
    int arr[t];
    for(int i=1;i<=t;i++)
        cin>>arr[i];
    if(arr[n]==0)
    {
        for(int i=1;i<n;i++)
         if(arr[i]>0)cnt++;
    }
    else cnt=n-1;
    for(int i=n;i<=t;i++)
    {
        if(arr[i]>0&&arr[n]==arr[i])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
