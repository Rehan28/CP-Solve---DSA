
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t,a;

    cin>>t>>a;
    int x = max(t,a);
      x = (6-x)+1;
      if(x!=3)
      {
          if(x==6)
          {
               cout<<1<<"/"<<1<<endl;
          }
          else if(x%2==0)
          {
                cout<<(x/2)<<"/"<<3<<endl;
          }
          else
          {
              cout<<x<<"/"<<6<<endl;
          }
      }
      else{
        cout<<1<<"/"<<2<<endl;
      }


 }
