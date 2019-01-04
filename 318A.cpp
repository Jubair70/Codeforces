#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,k;
   cin>>n>>k;
   long long even=n/2;
   long long odd=n-even;
   if(k<=odd)
    cout<<2*k-1;
   else cout<<2*(k-odd);
    return 0;
}




