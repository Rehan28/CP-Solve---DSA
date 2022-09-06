
#include<bits/stdc++.h>

using namespace std;
using LL = long long;

 void muku28()
 {
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 }
  void printi(int x)
  {
      cout<<x<<"\n";
  }
  void prints(string x)
  {
       cout<<x<<"\n";
  }
int main()
{
    muku28();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
       getline(cin,s);
       cin>>s;
       int count = 0;
       for(int i=0;i<n;i+=2)
       {
           if(s[i]!=s[i+1])
           {
               count++;
           }
       }
       printi(count);
    }
  return 0;
 }
