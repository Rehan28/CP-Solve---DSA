#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    int c = 0;
    int x = a[0];

    int i = 1;
    int j = n - 1;

    int mx = 0;
    int mn = 0;
    string ans ="L";
    while(i <= j) {
       if(a[i]>x and a[j]>x and mx<3){
        if(a[i]>a[j]){
            x = a[i];
            i++;
            ans += 'L';
        }
        else{
            x = a[j];
            j--;
            ans += 'R';
        }
        mx++;
        mn = 0;
       }
       else if(a[i]<x and a[j]<x and mn<3){
        if(a[i]<a[j]){
            x = a[i];
            i++;
            ans += 'L';
            //dbg(x);
        }
        else{
            x = a[j];
            j--;
            ans += 'R';
            //dbg(x);
        }
        mn++;
        mx = 0;
       }
       else if(a[i]>x and a[j]<x){
          if(mx<3){
            x = a[i];
            i++;
            ans += 'L';
            //dbg(x);
            mx++;
            mn = 0;
          }
          else{
            x = a[j];
            j--;
            ans += 'R';
            //dbg(x);
            mn++;
            mx = 0;
          }
       }
       else if(a[i]<x and a[j]>x){
          if(mn<3){
            x = a[i];
            i++;
            ans += 'L';
            //dbg(x);
            mn++;
            mx = 0;
          }
          else{
            x = a[j];
            j--;
            ans += 'R';
            //dbg(x);
            mx++;
            mn = 0;
          }
       }
       else{
           c = 1;
           break;
       }
         
    }


    if(c == 1) {
      x = a[n-1];

    i = 0;
    j = n - 2;

    mx = 0;
    mn = 0;
    
    string ans1 = "R";

    while(i <= j) {
       if(a[i]>x and a[j]>x and mx<3){
        if(a[i]>a[j]){
            x = a[i];
            i++;
            ans1 += 'L';
        }
        else{
            x = a[j];
            j--;
            ans1 += 'R';
        }
        mx++;
        mn = 0;
       }
       else if(a[i]<x and a[j]<x and mn<3){
        if(a[i]<a[j]){
            x = a[i];
            i++;
            ans1 += 'L';
            //dbg(x);
        }
        else{
            x = a[j];
            j--;
            ans1 += 'R';
            //dbg(x);
        }
        mn++;
        mx = 0;
       }
       else if(a[i]>x and a[j]<x or a[i]<x and a[j]>x){
          if(mx<3){
            x = a[i];
            i++;
            ans1 += 'L';
            //dbg(x);
            mx++;
            mn = 0;
          }
          else{
            x = a[j];
            j--;
            ans1 += 'R';
            //dbg(x);
            mn++;
            mx = 0;
          }
       }
       else if(a[i]<x and a[j]>x){
          if(mn<3){
            x = a[i];
            i++;
            ans += 'L';
            //dbg(x);
            mn++;
            mx = 0;
          }
          else{
            x = a[j];
            j--;
            ans += 'R';
            //dbg(x);
            mx++;
            mn = 0;
          }
       }
       else{
           c = 1;
           break;
       }
     }
        cout << ans1 << "\n";
        return;
    }
    cout << ans << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
