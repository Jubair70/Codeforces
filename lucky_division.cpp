#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int table[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++)
    {

        if(a%table[i]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        if(a<table[i])
            break;
    }
    cout<<"NO"<<endl;
    return 0;
}


