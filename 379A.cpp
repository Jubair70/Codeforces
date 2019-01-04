#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,m,sol=0;
   cin>>n>>m;
    while(n)
    {
        sol++;
        n--;
        if(sol%m==0)n++;
    }
    cout<<sol;
    return 0;
}









