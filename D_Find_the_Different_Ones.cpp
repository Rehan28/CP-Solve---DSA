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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int, int> mp;
    int x = 0;
    for (int i = 0; i < n-1;i++){
        if(a[i]!=a[i+1])
        {
            for (int j = i; j >= x;j--)
            {
                mp[j] = i + 2;
                //cout <<i<<" "<< j << "\n";
            }
            x = i + 1;
        } 
    }
    int q;
    cin >> q;
    for (int i = 0; i < q;i++){
        int st, ed;
        cin >> st >> ed;
        int y = mp[st - 1];
        if(y<=ed and y!=0)
        {
            cout << st << " " << y << "\n";
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
        }
    }
    nl;
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