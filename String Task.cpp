#include<bits/stdc++.h>
using namespace std;
int n;
bool vowel(char a)
{
    string s="AaEeIiOoUuYy";
    for(int i=0;i<s.length();i++)
        if(s[i]==a) return true;
    return false;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(!vowel(s[i]))
        {
            cout<<".";
            if(s[i]>='A'&&s[i]<='Z')
                cout<<(char)(s[i]+32);
            else
            cout<<s[i];
        }
    }
    return 0;
}

