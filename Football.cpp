#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int cnt=0,c=0;
    for(int i=0;i<s.length();i++)
    {
        if(cnt==7||c==7)
        {
            return 1;
        }
        else if(s[i]=='0')
        {
            c=0,cnt++;
        }
        else cnt=0,c++;
    }
    if(cnt==7||c==7)
        {
            return 1;
        }
    return 0;
}
int main()
{

    string s;
    cin>>s;
    if(check(s))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

