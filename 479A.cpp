#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int s1=a+b,s2=b+c;
     cout<<max(s1*c,max(s1+c,max(a*s2,max(a*b*c,a+s2))));
    return 0;
}

