#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    sort(a, a + n);
    vector<pair<int, int>> v;
    int x = -1;

    vector<int> v1;
    for (int i = 0; i < n - 1;i++){
        int gap = a[i + 1] - a[i];
        if(gap==0){
            v.push_back({a[i], a[i + 1]});
            x = a[i];
            
            if(i+2==n-1){
                v1.push_back(a[i+2]);
            }
            i++;
        }
        else{
            v1.push_back(a[i]);
            if(i==n-2){
                v1.push_back(a[i+1]);
            }
        }
    }


    if(v.size()>1){
        cout << v[0].first << " " << v[0].second << " ";
        cout << v[1].first << " " << v[1].second << nl;
    }
    else if (v.size() == 1){
        int x= v[0].first+v[0].second;
        for(int i=0;i<v1.size()-1;i++){
            int gap = v1[i+1]-v1[i];
            // dbg(gap);
            // dbg(x);
            if(x>gap){
                cout <<x/2<<" "<< v1[i] << " " << x/2 << " " << v1[i + 1] << nl;
                return;
            }
        }
        cout << -1 << nl;
    }
    else{
        cout<<-1<<nl;
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
