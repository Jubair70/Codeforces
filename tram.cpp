#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int a,b,maxa;
    cin>>a>>b;
    n--;
    maxa=b;
    int curr=b;
    while(n--)
    {

        cin>>a>>b;
        curr=(curr-a)+b;
        maxa=max(maxa,curr);

    i++;
    }
    cout<<maxa<<endl;
    return 0;
}
