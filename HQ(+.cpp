#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<s.length();i++)
    {
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
    {f=1;cout<<"YES"<<endl;
    break;}
    }
    if(!f)
    cout<<"NO"<<endl;
    return 0;
}




