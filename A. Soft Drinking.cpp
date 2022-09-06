

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int  n, k, l, c, d, p, nl, np;
   cin>>n;
   cin>>k>>l>>c>>d>>p>>nl>>np;
   int glass = (l*k)/nl;
   double slic = c*d;
   if((glass/slic)>1.00)
   {
       glass = slic;
   }
   double salt = p/np;
   if((glass/salt)>1.00)
   {
       glass = salt;
   }
   cout<<(glass/n)<<endl;
}

