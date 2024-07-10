#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

void Rehan(int test) {
    int n,k;
    cin>>n>>k;
    int x = 2 * n;
    int a[x];
    cin(a, x);
    k = 2 * k;
    map<int, int> mp;
    map<int, int> mp1;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    for (int i = n; i < x;i++){
        mp1[a[i]]++;
    }
    vector<int> v;
    vector<int> v1;
    for (int i = 1; i <= n;i++){
        if(mp[i]==2){
            v.push_back(i);
            v.push_back(i);
        }
        else if(mp1[i]==2){
            v1.push_back(i);
            v1.push_back(i);
        }
    }
    for (int i = 1; i <= n;i++){
        if(mp[i]==1 and mp1[i]==1){
            v.push_back(i);
            v1.push_back(i);
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }
    nl
    for (int i = 0; i < k;i++){
        cout << v1[i] << " ";
    }
    nl;
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