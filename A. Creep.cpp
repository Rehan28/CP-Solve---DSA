#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;

 while(t--)
 {
  int a,b;
  int sum = 0;
  cin>>a>>b;
  sum = abs(a-b);
  for(int i=1;i<=(a+b);i++){
    if(sum<i&&i<=(sum+b))
    {
      cout<<1;
    }
    else
    {
      cout<<0;
    }
  }
  cout<<endl;

}
}



