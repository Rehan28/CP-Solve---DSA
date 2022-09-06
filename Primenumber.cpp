
#include<bits/stdc++.h>

using namespace std;

 int prime(int x)
 {
     int dif;
    dif = x/2;
    int sum = 0;
    for(int i=2;i<=dif;i++)
    {
       if(x%i==0)
       {
           sum = 1;;
           break;

       }
    }
    return sum;
 }
int main()
{
    int x;
    cin>>x;
  cout<<prime(x);

}

