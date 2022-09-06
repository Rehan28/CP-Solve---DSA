
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       int n;
       cin>>n;
       int c1 = n/3;
       int c2 = n-(c1*2);
       if(c2-c1>=2)
       {
           cout<<(c2-2)<<" "<<(c1+1)<<endl;
       }
       else{
        cout<<c2<<" "<<c1<<endl;
       }

    }
 }
