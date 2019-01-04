#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int j=b.length()-1,i=0;j>=0;j--,i++)
    {
        if(b[j]!=a[i])
        {
            cout<<"NO";
            return 0;
        }
    }
        cout<<"YES";
    return 0;
}
