#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int i=0;
    int b2=sum,b1=0;
    while(b2>b1)
    {
        b2=b2-a[i];
        b1=b1+a[i];
        i++;

    }
    cout<<n-i+1<<endl;
    return 0;
}
