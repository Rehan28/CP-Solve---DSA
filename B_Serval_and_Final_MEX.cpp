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

    int zero = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==0){
            zero++;
        }
    }

    if(zero==n){
        cout << 3 << "\n";
        cout << 1 << " " << n - 2 << "\n";
        cout << 2 << " " << 3 << "\n";
        cout << 1 << " " << 2 << "\n";
    }
    else if(zero==0){
        cout << 1 << "\n";
        cout<<1<<" "<<n<<nl;
    }
    else{
        int l = 0;
        vector<pair<int,int>> vp;
        int val = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                int c = 0;
                int y = i;
                for (int j = i; j < n;j++){
                    if(a[j]!=0){
                        break;
                    }
                    i = j;
                    c++;
                }
                l = y + 1 - val;
                //dbg(l);
                if(c>1){
                    vp.push_back({l,l+c-1});
                    val += c - 1;
                }
                else{
                    if(l==1){
                        vp.push_back({l,l+1});
                        val++;
                        i++;
                    }
                    else{
                        vp.push_back({l-1,l});
                        val++;
                    }
                }
            }

        }
        cout << vp.size()+1 << "\n";
        for(auto x:vp){
            cout << x.first << " " << x.second << "\n";
            int xx = x.second - x.first;
            n -= xx;
        }
        cout << 1 << " " << n << "\n";
    }
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
