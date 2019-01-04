#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
   int k=0;
   int c=1;
   while(1)
   {
       if(k+c*5>=n)
        break;
        k+=c*5;
        c*=2;
   }
   n--;
   int ans=(n-k)/c;
   ans++;
   if (ans == 1)
		cout << "Sheldon";
	if (ans == 2)
		cout << "Leonard";
	if (ans == 3)
		cout << "Penny";
	if (ans == 4)
		cout << "Rajesh";
	if (ans == 5)
		cout << "Howard";
    return 0;
}


