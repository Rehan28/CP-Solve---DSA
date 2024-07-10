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
int Rehan(int test){
    int n;
    cin>>n;
    string s, s1;
    cin >> s >> s1;
    string ans = "";
    int j = 0;
    bool f = true;
    for (int i = 0; i < n-1;i++){
        ans += s[i];
        if(s1[i]=='0' and s[i+1]=='1'){
            j = i;
            f = false;
            break;
        }
    }
    if(f){
        j = n - 1;
        ans += s[n - 1];
    }
    for (int i = j; i < n - 1;i++){
        ans += s1[i];
    }
    ans += s1[n - 1];
    int way = 1;
    //dbg(j);
    for (int i = j; i >0;i--){
        if(s[i]!=s1[i-1]){
            break;
        }
        way++;
    }
    cout << ans << "\n";
    cout << way << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();int t = 1;
		cin>>t;
    for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }