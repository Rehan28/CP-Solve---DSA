#include <bits/stdc++.h>
#define Debug(x)                        cout << #x << " = "; cout << x << '\n'
#define Optimization()                  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);

using namespace std;
typedef long long ll;

const ll   N                            = (ll) 2e6+3;
const ll   MOD1e9                       = (ll) 1e9+7;

void Approach(){
    
}

int main(){
    Optimization();
    ll Cases = 1;
    cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        int n;
        cin >> n;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        for (int i = 0; i < n;i++){
            cin >> b[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n;i++)d{
                mp[b[i]] = -1;
        }
        map<int, int> mp1;
        for (int i = 0; i < n; i++)
        {
            int x = mp[b[i]]+1;
            for (int j = x; j < n; j++){
                if(a[j]==b[i]){
                    mp[b[i]] = j;
                    mp1[i] = j;
                    break;
                }  
            }
        }
        for(auto x:mp1){
            cout<<x.
        }

        cout << "Case " << Test << ": " << min(ans, ans1) << "\n";
    }
    return 0;
}
        // int index = 0;
        // int lastf = -1;
        // for (int i = 0; i < n;i++){
        //     bool f = true;
        //     for (int j = index;j<n;j++){
        //         if(b[i]==a[j]){
        //             index = j+1;
        //             lastf = i;
        //             f = false;
        //             break;
        //         }
        //     }
        //     if(f){
        //         break;
        //     }
        // }
        // index--;
        // int laste = n;
        // for (int i = n - 1; i > -1;i--){
        //     bool f = true;
        //     for (int j = n-1; j > index;j--){
        //         if(b[i]==a[j]){
        //             index = j - 1;
        //             f = false;
        //             laste = i;
        //             break;
        //         }
        //     }
        //     if(f){
        //         break;
        //     }
        // }
        // int ans = (laste - lastf) - 1;
        // /////////////
        // index = n-1;
        // int laste1 = n;
        // for (int i = n - 1; i > -1;i--){
        //     bool f = true;
        //     for (int j = index; j > -1;j--){
        //         if(b[i]==a[j]){
        //             index = j - 1 ;
        //             f = false;
        //             laste1 = i;
        //             break;
        //         }
        //     }
        //     if(f){
        //         break;
        //     }
        // }
        // index++;
        // //cout << index << "\n";
        // int lastf1 = -1;
        // for (int i = 0; i < n;i++){
        //     bool f = true;
        //     for (int j = 0;j<index;j++){
        //         if(b[i]==a[j]){
        //             index = j+1;
        //             lastf1 = i;
        //             f = false;
        //             break;
        //         }
        //     }
        //     if(f){
        //         break;
        //     }
        // }
        // //cout << lastf1 << "\n";
        // int ans1 = (laste1 - lastf1)-1;