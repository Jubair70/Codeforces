#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=1;i<=t;i++)
    {
        int a;
        cin>>a;
        arr[a]=i;
    }
    for(int i=1;i<=t;i++)
        cout<<arr[i]<<" ";
    return 0;
}
