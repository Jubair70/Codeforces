#include<bits/stdc++.h>
using namespace std;
int main()
{
   string n,m;
   cin>>n>>m;
   string a;
   for(int i=0;i<m.length();i++)
   {
       if(n[i]==m[i])
       a.push_back('0');
       else a.push_back('1');
   }
   cout<< a;
    return 0;
}
