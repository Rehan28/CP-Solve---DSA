#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//Muku28
int Rehan(){
    int n,k;
    cin>>n>>k;
    ll a[n];
    cin(a,n);
    ll b[n];
    cin(b, n);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        b[i] = abs(b[i]);
        vp.push_back(make_pair(b[i], a[i]));
    }
    sort(vp.begin(), vp.end());
    int j = 0;
    int time = 0;
    int t[n]={0};
    bool f = true;
    while (j<n){
        ll x = k;
        for (int i = j; i < n;i++){
            int xx = vp[i].second;
            int yy = vp[i].first;
            yy -= time;
            if(xx<=x){
                x -= vp[i].second;
                vp[i].second = 0;
                t[j] = time;
                if(yy<1){
                    f = false;
                    break;
                }
                j++;
            }
            else{
                vp[i].second -= x;
                x = 0;
            }
            if(x==0){
                break;
            }
        }
        if(f==false){
            break;
        }
        time++;
    }
    if(f){
        yes;
    }
    else{
        no;
    }
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }