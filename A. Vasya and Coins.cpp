#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;


   for(int i=0;i<t;i++)
   {
       int a,b;
       int sum;
       cin>>a;
       cin>>b;
       sum = a + (b*2) + 1;
       if(a == 0)
       {
           cout<<1<<"\n";
       }
       else
       {
           cout<<sum<<endl;
       }
    }
}
