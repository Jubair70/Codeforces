#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a;
     if(s[1]>='A'&&s[1]<='Z')
            a=1;
            else a=0;
    for(int i=2;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            a=a&1;
        else a=a&0;
    }
    if(a||s.length()==1)
    {
    if(s[0]>='a'&&s[0]<='z')
        s[0]=s[0]-32;
    else s[0]=s[0]+32;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
    }
    }

    cout<<s<<endl;
    return 0;
}


