#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()
using namespace std; 
#define int long long



signed main() {
   FAST_IO;
   // start
   int t;
   cin>>t;
   read:
   while (t--) {
      int n;
      cin>>n;

      string s;
      cin>>s;

      int sum = n * (n+1)/2;
      int cur = 0;

      for(int i=n; i>0; i--){
         if(s[i-1]=='1'){
            if(cur<i-1){
               sum-=i;
               cur++;
            }
            cout << cur << "\n";
         }
         else cur = max(cur-1, 0LL);
      }

      cout<<sum<<"\n";
   
   }



   return 0;
}