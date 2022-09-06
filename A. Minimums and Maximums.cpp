
#include<bits/stdc++.h>

using namespace std;
using LL = long long;
//muku28
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
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(max(l1,l2)<= min(r1,r2))
        {
            printi(max(l1,l2));
        }
        else
        {
            printi(l1+l2);
        }
    }

    return 0;
 }
