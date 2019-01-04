#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    if(s.length()<=2)
        cout<<s;
    else
    {
        auto it=s.find("WUB");
        while(it!=string::npos)
        {
            s.erase(it,3);
            if(it>0&&s[it-1]!=' ')
                s.insert(it," ");
            it=s.find("WUB");
        }
        cout<<s;
    }


    return 0;

}
