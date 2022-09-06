#include<bits/stdc++.h>

using namespace std;

//Muku28

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n];
       int even = 0,odd = 0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }

       }

       if(odd>even || even>odd+1|| (even == n&&n!=1) )
       {
           cout<<"-1"<<endl;
       }
       else{
            int count = 0;
        for(int i=0;i<n;i+=2)
        {
            if(a[i]%2!=0)
            {
                count++;
            }
        }
        cout<<count<<endl;
       }
   }
}
