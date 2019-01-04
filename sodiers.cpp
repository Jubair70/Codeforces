#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    if(n-(w*(k*w+k)/2)>=0)
        cout<< 0 ;
    else cout<<(w*(k*w+k)/2)-n;

    return 0;
}
