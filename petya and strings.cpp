#include<bits/stdc++.h>
using namespace std;
int main()
{

    string first,second;
    cin>>first>>second;
    for(int i=0;i<first.length();i++)
    {
        if(first[i]>='A'&&first[i]<='Z')
        first[i]=first[i]+32;
        if(second[i]>='A'&&second[i]<='Z')
        second[i]=second[i]+32;

    }
    cout<<first.compare(second)<<endl;

    return 0;
}


