#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int x=0;
    while(t--)
    {
        cin>>s;
        if(s[0]=='+'||s[s.length()-1]=='+')
            x++;
        else x--;
    }
    cout<<x<<endl;
    return 0;
}
