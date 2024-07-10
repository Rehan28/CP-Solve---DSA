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
const int N = 1e4 + 9;
int f[N];
void sp(){
    for (int i = 0; i < N;i++){
        f[i] = i;
    }
        for (int i = 2; i < N; i++)
        {
            for (int j = i; j < N; j += i)
            {
                f[j] = min(f[j], i);
            }
        }
}
//Muku28
int Rehan(){
    int n,m;
    cin>>n>>m;
    int a[n];
    cin(a,n);
    string s;
    cin >> s;
    vector<pair<int, int>> md;
    
    while(m>1){
        int p = f[m];
        int power = 0;
        while(m%p==0){
            m /= p;
            power++;
        }
        md.push_back(make_pair(p, power));
    }
    int mp[N] = {0};
    for (int i = 0; i < n;i++){
        for (int j = 0; j < md.size();j++)
        {
            m = a[i];
            int st = md[j].first;
            while (m%st==0){
                m /= st;
                mp[st]++;
            }
        }
    }
    int l = 0;
    int r = n - 1;
    for (int i = 0; i < n;i++){
        int ans = 0;
        for(auto x : md){
            int st = x.first;
            int power = x.second;
           // cout << st << " " << power <<" "<<mp[st]<< "rehan\n";
            if(power>mp[st]){
                int number1 = pow(st, power);
                int number2 = pow(st, mp[st]);
                ans += (number1 - number2);
            } 
        }
        cout << ans << " ";
        if(s[i]=='L'){
            for(auto x : md){
                m = a[l];
                int st = x.first;
                while (m%st==0){
                    m /= st;
                    mp[st]--;
                }
            }
            l++;
        }
        else{
             for(auto x : md){
                m = a[r];
                int st = x.first;
                while (m%st==0){
                    m /= st;
                    mp[st]--;
                }
            }
            r--;
        }
    }
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    sp();
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }