#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    set<char>s;
    for(int i=0;i<a.length();i++)
            s.insert(a[i]);

    if(s.size()%2)
        cout<<"IGNORE HIM!\n";
    else cout<<"CHAT WITH HER!\n";
    return 0;
}




