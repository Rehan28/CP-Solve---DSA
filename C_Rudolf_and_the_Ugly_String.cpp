#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//cout << "Case " << test << ": ";
//Muku28
int Rehan(int test) {
    int n;
    cin>>n;
    string s;
    cin >> s;
    int ans = 0;
    vector<int> v;
    map<int, int> mp;
    for (int i = 1; i < n - 1;i++){
        if(s[i]=='a' and s[i-1]=='m' and s[i+1] == 'p'){
            ans++;
            mp[i]++;
        }
        else if(s[i]=='i' and s[i-1]=='p' and s[i+1]=='e'){
            ans++;
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size();i++){
        int x = v[i]-2;
        if(mp[x]!=0){
            ans--;
        }
    }
    cout << ans << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }