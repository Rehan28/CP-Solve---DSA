
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;

   for(int i=0;i<t;i++)
   {
      int a;
      int b;
      int count =0;
       cin>>a;
       cin>>b;
       int dif;
       dif = abs(a-b);
       if(dif == 0)
       {
           cout<<0<<endl;
       }
       else if(dif<11)
       {
           cout<<1<<endl;
       }
       else{
       for(int i=10;i>0;i--)
       {
           count = count + (dif/i);
           dif = dif%i;
       }
        cout<<count<<endl;
       }
   }
}
