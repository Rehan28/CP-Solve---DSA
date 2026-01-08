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
    int n,q;
    cin >> n >> q;
    int a[n];
    cin(a,n);
    int pos[100] = {0};
    for (int i = 0; i < n;i++){
        if(pos[a[i]]==0){
            pos[a[i]] = i + 1;
        }
    }
    while(q--){
        int t;
        cin >> t;
        for (int i = 1; i <51;i++){
            if(pos[i]!=0){
                if(i==t){
                    cout << pos[i] << " ";
                    for (int j = 1; j <= 50;j++){
                        if(pos[j]<pos[i]){
                            pos[j]++;
                        }
                    }
                    pos[i] = 1;
                    break;
                }
            }
        }
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
