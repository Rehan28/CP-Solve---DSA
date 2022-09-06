
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    string t;
    cin>>t;
     int n = t.size();
     int x = n/2;
     sort(t.begin(), t.end());
     for(int i=x;i<n;i++)
     {
         cout<<t[i];
         if(i!=n-1)
         {
             cout<<"+";
         }
     }
     cout<<endl;
 }
