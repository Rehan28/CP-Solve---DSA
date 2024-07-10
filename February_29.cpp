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
int Rehan(int test){
    string s[4];
    string s1[4];
    for (int i = 0; i < 3;i++){
        cin >> s[i];
    }
    for (int i = 0; i < 3;i++){
        cin >> s1[i];
         if(i==1){
            string ss = "";
            for (int j = 0; j < s1[i].size()-1;j++){
                ss += s1[i][j];
            }
            s1[i] = ss;
        }
    }
    string month[] = {"January",
                    "February",
                    "March",
                    "April",
                    "May",
                    "June",
                    "July",
                    "August",
                    "September",
                    "October",
                    "November",
                    "December"};
    ll n = stoi(s1[2]);
    ll x = 0;
    for (int i = 0; i < 12;i++){
        if(s1[0]==month[i]){
            x = i;
            break;
        }
    }
    ll date = stoi(s1[1]);
    if(x==0 or (x==1 and date<29)){
        n--;
    }
    ll mxleap = (n / 4);
    ll bad_jabe = (n / 100) - (n / 400);
    mxleap -= bad_jabe;
    //////////agerta
    ll nx = stoi(s[2]);
    x = 12;
    nx--;
    for (int i = 0; i < 12;i++){
        if(s[0]==month[i]){
            x = i;
            break;
        }
    }
    if(x>1){
        nx++;
    }
    ll mnleap = (nx / 4);
    int bad_jabe1 = (nx / 100) - (nx / 400);
    mnleap -= bad_jabe1;
    //cout << bad_jabe << "\n";
    cout <<"Case "<<test<<": "<< mxleap - mnleap << "\n";

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    for (int i = 1;i<=t;i++){
        Rehan(i);
    }
  
		return 0;
 }