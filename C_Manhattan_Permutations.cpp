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
#define int long long

void solve(int test) {
    int n,k;
    cin >> n>>k;
    int val = 0;
    int j = n;
    for (int i = 1; i <= n;i++){
        val += abs(i - j);
        j--;
    }
    if(k%2 or k>val){
        no;
    }
    else{
        int a[n + 1];
        for (int i = 1; i <= n;i++){
            a[i] = i;
        }
        int i = 1;
        int j = n;
        while(i<j and k>0){
            int dis = 2*(j - i);
            if(dis>k){
                j--;
            }
            else{
                swap(a[i], a[j]);
                k -= dis;
                i++;
                j--;
            }
        }
        yes;
        for (int i = 1; i <= n;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
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
