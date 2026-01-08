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
    int a[n];
    cin(a,n);
    string s;
    cin >> s;
    int ans[n];
    for (int i = 0; i < n;i++)
    {
        ans[i] = -1;
    }
    for (int i = 0; i < n;i++){
        if(ans[i]!=-1){
            continue;
        }
        if(a[i]-1==i and s[i]=='0'){
            ans[i] = 1;
            continue;
        }
        int x = i;
        vector<int> v;
        int c = 0;
        while(1){
            if(s[x]=='0'){
                c++;
            }
            v.push_back(x);
            x = a[x] - 1;
            if(x==i){
                break;
            }
        }
        //dbg(v.size());
        for (int j = 0; j < v.size();j++){
            //cout << v[j] << " ";
            ans[v[j]] = c;
        }
        //dbg(c);
    }
    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
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
