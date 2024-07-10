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
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<int, char>> vp;
    for (int i = 0; i < m;i++){
        int a;
        char c;
        cin >> a>>c;
        vp.push_back(make_pair(a, c));
    }
    vector<pair<int, int>> vp1;
    set<int> ans;
    vp1.push_back(make_pair(k, 0));
    map<pair<int, int>, int> mpp;
    mpp[{k, 0}]++;
    while (vp1.size())
    {
        int x = vp1[vp1.size()-1].second;
        int pos = vp1[vp1.size()-1].first;
        vp1.pop_back();
        bool f = true;
        for (int i = x; i < m;i++){
            char c = vp[i].second;
            int d = vp[i].first;
            int way1 = (d + pos) % n;
            if(way1==0){
                way1 = n;
            }
            int way2 = (pos-d);
            way2 = ((way2 % n) + n) % n;
            if(way2==0){
                way2 = n;
            }
            if(c=='?' and mpp[{way1,i+1}]==0){
                vp1.push_back(make_pair(way1, i + 1));
                mpp [{way1, i + 1}]++;
                if(mpp[{way2,i+1}]==0){
                    vp1.push_back(make_pair(way2, i + 1));
                    mpp [{way2, i + 1}]++;
                }
                f = false;
                break;
            }
            else if(c=='0'){
                pos = way1;
            }
            else{
                pos = way2;
            }
        }
        if(f){
            ans.insert(pos);
        }
    }
    cout << ans.size() << "\n";
    for (auto x:ans)
    {
        cout << x << " ";
    }
    cout << "\n";

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