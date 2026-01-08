#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n+1];
    cin(a,n);
    int j = 1;
    map<int, int> mp;
    int ans[n + 1];
    for (int i = 0; i< n;i++){
        if(mp[a[i]]==0){
            ans[i] = a[i];
        }
        else{
            ans[i] = 0;
        }
        mp[a[i]]++;
    }

    //min
    for (int i = 1; i <= n;i++){
       if(ans[i-1]==0){
           for (; j <= n;j++){
             if(mp[j]==0){
                 mp[j]++;
                 cout << j << " ";
                 break;
             }
           }
       }
       else{
           cout << ans[i - 1] << " ";
       }
    }
    cout << "\n";

    //Max
    set<int> st;
    for (int i = 1; i < a[0];i++){
        st.insert(i);
    }
    a[n] = n+1;
    map<int, int> mp1;
    for (int i = 0; i < n;i++){
        if(a[i]!=a[i+1]){
            cout << a[i] << " ";
            for (int k = a[i]+1; k < a[i+1];k++){
                st.insert(k);
            }
        }
        else{
            cout << a[i] << " ";
            for (; i < n;i++){
                if(a[i]!=a[i+1]){
                    for (int k = a[i]+1; k < a[i+1];k++){
                        st.insert(k);
                    }
                    break;
                }
                auto it = st.rbegin();
                int x = *it;
                cout << x << " ";
                st.erase(st.find(x));
            }
            
        }
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
