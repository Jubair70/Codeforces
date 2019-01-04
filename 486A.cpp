#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a==0)
        cout<<0;
    else if(a==1)
        cout<< -1;
    else if(a%2==0)
        cout<<a/2;
    else
    {
        long long s=a/2;
        long long d=a-(a/2);
        cout<<s*(s+1)-(d*d);
    }
    return 0;
}


