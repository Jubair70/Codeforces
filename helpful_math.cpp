#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[s.length()],j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='+')
            arr[j++]=(s[i]-48);
    }
    if(j<2)cout<<s<<endl;
    else
    {
    sort(arr,arr+j);
    for(int i=0;i<j;i++)
    {
        if(i<j-1)
        cout<<arr[i]<<"+";
        else cout<<arr[i]<<endl;
    }
    }

    return 0;
}



