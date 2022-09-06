#include<bits/stdc++.h>

using namespace std;
int main()
{
   int t;
   int def[1000];
   int n[1001];
   cin>> t;
  for(int i=0; i<t;++i)
  {
      def[i] = 0;
      cin>> n[i];
      int a[101];
    for(int j=0;j<n[i];++j)
    {
        cin>> a[j];
    }
    sort(a,a+n[i]);

   for(int k=0;k<n[i]-1;++k)
   {
       if((a[k+1]-a[k])>1){
           def [i] = 1;
           break;
       }

   }

    if(def[i]==0){
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
  }

}
